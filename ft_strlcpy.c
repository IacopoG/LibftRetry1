/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iacopoguscetti <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:45:08 by iacopogus         #+#    #+#             */
/*   Updated: 2021/01/20 11:34:58 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	it;
	size_t	strl;

	if (!dst || !src)
		return (0);
	strl = ft_strlen(src);
	it = dstsize;
	if (it != 0)
		while (--it)
			if ((*dst++ = *src++) == '\0')
				break ;
	if (it == 0 && dstsize != 0)
		*dst = '\0';
	return (strl);
}
