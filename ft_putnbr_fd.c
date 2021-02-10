/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iacopoguscetti <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:41:38 by iacopogus         #+#    #+#             */
/*   Updated: 2021/01/20 10:27:01 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long int	nl;

	nl = (long int)n;
	if (nl < 0)
	{
		write(fd, "-", 1);
		nl = -nl;
	}
	if (nl / 10 != 0)
	{
		ft_putnbr_fd(nl / 10, fd);
		ft_putnbr_fd(nl % 10, fd);
	}
	else
	{
		c = nl + '0';
		write(fd, &c, 1);
	}
}
