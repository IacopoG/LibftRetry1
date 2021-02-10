/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iacopoguscetti <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 12:41:53 by iacopogus         #+#    #+#             */
/*   Updated: 2021/01/20 10:43:31 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*strim;

	if (!*set || !s1)
		return (NULL);
	while (ft_isset(*s1, set) && *s1)
		s1++;
	i = ft_strlen(s1);
	while (ft_isset(s1[i - 1], set) && i >= 0)
		i--;
	strim = ft_substr(s1, 0, i);
	return (strim);
}
