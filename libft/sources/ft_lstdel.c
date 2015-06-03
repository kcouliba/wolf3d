/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:17:43 by kcouliba          #+#    #+#             */
/*   Updated: 2015/02/03 15:49:30 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*cpy;
	t_list	*tmp;

	if (!alst || !del)
		return ;
	cpy = (*alst)->next;
	while (cpy)
	{
		tmp = cpy->next;
		ft_lstdelone(&cpy, del);
		cpy = tmp;
	}
	ft_lstdelone(alst, del);
	*alst = NULL;
}
