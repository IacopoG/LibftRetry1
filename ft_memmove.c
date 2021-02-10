/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iacopoguscetti <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:53:49 by iacopogus         #+#    #+#             */
/*   Updated: 2021/01/28 12:53:20 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*pdst;
	const char	*psrc;

	pdst = dst;
	psrc = src;
	if (pdst > psrc)
	{
		while (n-- > 0)
			*(pdst + n) = *(psrc + n);
	}
	else if (psrc > pdst)
	{
		while (n-- > 0)
			*pdst++ = *psrc++;
	}
	return (dst);
}
