/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/03 23:45:18 by kcouliba          #+#    #+#             */
/*   Updated: 2014/01/03 23:54:33 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstprint(t_list *list)
{
	while (list)
	{
		ft_putstr((char*)list->content);
		ft_putchar(' ');
		list = list->next;
	}
}
