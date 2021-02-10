/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iacopoguscetti <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:59:25 by iacopogus         #+#    #+#             */
/*   Updated: 2021/01/18 22:00:37 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	it;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	it = 0;
	while (*dst)
		dst++;
	if (dstsize != 0 && dstsize > dstlen + 1)
	{
		while (*src && it++ < (dstsize - dstlen - 1))
		{
			*dst++ = *src++;
		}
	}
	*dst = '\0';
	if (dstsize > dstlen)
		return (dstlen + srclen);
	return (dstsize + srclen);
}
