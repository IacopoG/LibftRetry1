/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iacopoguscetti <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:53:12 by iacopogus         #+#    #+#             */
/*   Updated: 2021/01/28 12:55:42 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ss;
	int		i;

	i = -1;
	if (!s)
		return (NULL);
	if (!(ss = (char*)malloc(sizeof(*ss) * (len + 1))))
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (s[start] && len-- > 0)
			ss[++i] = s[start++];
		ss[++i] = '\0';
	}
	return (ss);
}
