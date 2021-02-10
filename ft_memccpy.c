/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iacopoguscetti <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:53:49 by iacopogus         #+#    #+#             */
/*   Updated: 2021/01/28 12:52:26 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*pdst;
	const char	*psrc;
	int			i;

	pdst = dst;
	psrc = src;
	i = 0;
	while (n-- > 0)
	{
		*pdst++ = *psrc++;
		i++;
		if (*(psrc - 1) == (char)c)
			return (dst + i);
	}
	return (NULL);
}
