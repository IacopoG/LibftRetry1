/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iacopoguscetti <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:55:17 by iacopogus         #+#    #+#             */
/*   Updated: 2020/11/24 18:31:12 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (ft_strlen(nee) == 0)
		return ((char*)hay);
	j = 0;
	while (*(hay + i))
	{
		j = 0;
		while (*(hay + i + j) == *(nee + j) && i + j < len)
		{
			j++;
			if (j == ft_strlen(nee))
				return ((char*)(hay + i));
		}
		i++;
	}
	return (NULL);
}
