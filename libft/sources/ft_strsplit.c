/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/30 00:02:44 by kcouliba          #+#    #+#             */
/*   Updated: 2015/05/05 14:04:17 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_strdupi(const char *src, size_t offset, size_t end)
{
	size_t	i;
	char	*dupi;

	i = 0;
	dupi = ft_strnew((end - offset) + 1);
	while (i < (end - offset))
	{
		dupi[i] = src[offset + i];
		i++;
	}
	return (dupi);
}

static	size_t	word_count(char *mask)
{
	size_t	count;
	size_t	i;

	if (!mask)
		return (0);
	count = 0;
	i = 0;
	while (mask[i])
	{
		if (mask[i] == '1')
		{
			++count;
			while (mask[i] == '1')
				++i;
		}
		else
			++i;
	}
	return (count);
}

static	char	*split_mask(const char *s, char c, size_t *count)
{
	char	*mask;
	size_t	i;

	if (!s || !(mask = ft_strdup((char *)s)))
		return (NULL);
	i = 0;
	while (mask[i])
	{
		mask[i] = (mask[i] == c) ? '0' : '1';
		++i;
	}
	*count = word_count(mask);
	return (mask);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	char	*mask;
	size_t	count;
	int		i;
	int		j;

	if ((mask = split_mask(s, c, &count)) == NULL)
		return (NULL);
	if ((split = (char**)malloc(sizeof(*split) * (count + 1))) == NULL)
		return (NULL);
	split[count] = NULL;
	i = ft_strlen(mask) - 1;
	while (i > 0)
	{
		while (mask[i] == '0')
			--i;
		j = i + 1;
		while (mask[i] == '1')
			mask[i--] = '0';
		if (i != j)
			split[--count] = ft_strdupi(s, i + 1, j);
	}
	return (split);
}
