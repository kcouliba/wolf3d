/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:25:30 by kcouliba          #+#    #+#             */
/*   Updated: 2013/12/29 23:26:17 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cpy_s1;
	unsigned char	*cpy_s2;
	size_t			i;

	if (!s1 || !s2)
		return (0);
	cpy_s1 = (unsigned char*)s1;
	cpy_s2 = (unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (cpy_s1[i] != cpy_s2[i])
			return (cpy_s1[i] - cpy_s2[i]);
		i++;
	}
	return (cpy_s1[i - 1] - cpy_s2[i - 1]);
}
