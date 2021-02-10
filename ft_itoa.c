/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iacopoguscetti <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 10:28:50 by iacopogus         #+#    #+#             */
/*   Updated: 2021/01/20 09:52:53 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	get_size(int n)
{
	long int	n_it;
	long int	i;

	n_it = 1;
	i = n;
	while ((i /= 10) != 0)
		n_it++;
	if (n < 0)
		n_it++;
	return (n_it);
}

char		*ft_itoa(int n)
{
	long int	i;
	long int	n_it;
	char		*res;

	n_it = get_size(n);
	if (!(res = (char*)malloc(sizeof(*res) * (n_it + 1))))
		return (NULL);
	res[0] = '0';
	i = (long int)n;
	if (n < 0)
	{
		res[0] = '-';
		i = (long int)n * (-1);
	}
	res[n_it] = '\0';
	while (i != 0)
	{
		res[--n_it] = i % 10 + '0';
		i /= 10;
	}
	return (res);
}
