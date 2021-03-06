/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iacopoguscetti <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:53:49 by iacopogus         #+#    #+#             */
/*   Updated: 2021/01/28 12:40:26 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			((char *)str)[i] = 0;
			i++;
		}
	}
}
