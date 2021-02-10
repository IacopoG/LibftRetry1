/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iacopoguscetti <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 13:21:19 by iacopogus         #+#    #+#             */
/*   Updated: 2021/01/20 10:29:18 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sn;
	int		i;

	i = -1;
	if (!s1 || !s2)
		return (NULL);
	if (!(sn = malloc(sizeof(sn) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (*s1)
		sn[++i] = *s1++;
	while (*s2)
		sn[++i] = *s2++;
	sn[++i] = '\0';
	return (sn);
}
