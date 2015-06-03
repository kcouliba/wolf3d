/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_information.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/30 22:06:40 by kcouliba          #+#    #+#             */
/*   Updated: 2014/06/22 23:06:09 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_prog	*new_prog(int ac, char **av)
{
	t_prog	*new;

	if (!(new = (t_prog*)malloc(sizeof(*new))))
		return (NULL);
	new->argc = ac;
	new->argv = av;
	return (new);
}
