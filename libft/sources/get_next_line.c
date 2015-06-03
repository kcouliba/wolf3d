/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/30 00:31:24 by kcouliba          #+#    #+#             */
/*   Updated: 2014/04/28 22:52:43 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static	t_list	*store(int const fd)
{
	t_list	*l_buff;
	int		rd;
	char	buff[MAX_BUFF_SIZE];
	char	*tmp;

	l_buff = NULL;
	while ((rd = read(fd, buff, MAX_BUFF_SIZE)))
	{
		tmp = ft_strnew(rd);
		ft_memcpy(tmp, buff, rd);
		ft_lstadd(&l_buff, ft_lstnew(ft_strdup(tmp), rd));
		ft_strdel(&tmp);
	}
	return (l_buff);
}

static	char	*storedbuff(int const fd)
{
	char	*tmp;
	t_list	*l_buff;

	if (!(l_buff = store(fd)))
		return (NULL);
	tmp = ft_strnew(1);
	while (l_buff)
	{
		tmp = ft_strjoin(tmp, (char*)l_buff->content);
		l_buff = l_buff->next;
	}
	return (tmp);
}

int				get_next_line(int const fd, char **line)
{
	char			*buff;
	static	int		call = 0;
	static	char	**split;

	if (call < 0)
		return (0);
	if (call == 0)
	{
		buff = NULL;
		if (!(buff = storedbuff(fd)))
			return (-1);
		split = ft_strsplit(buff, '\n');
	}
	if (!split[call])
		return (0);
	*line = ft_strdup(split[call]);
	call++;
	return (1);
}
