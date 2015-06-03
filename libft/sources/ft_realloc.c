/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/31 22:35:11 by kcouliba          #+#    #+#             */
/*   Updated: 2013/12/31 22:48:32 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_realloc(void *ptr, size_t size)
{
	void	*tmp;

	if (!ptr)
		return (ft_memalloc(size));
	if (!size)
		return (ft_memalloc(sizeof(*ptr) * 1));
	tmp = ft_memalloc(size);
	tmp = ft_memcpy(tmp, ptr, sizeof(ptr));
	free(ptr);
	ptr = ft_memalloc(size);
	ft_memset(ptr, 0, size);
	ft_memcpy(ptr, tmp, size);
	return (ptr);
}
