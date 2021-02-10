/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iacopoguscetti <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 13:30:21 by iacopogus         #+#    #+#             */
/*   Updated: 2021/01/20 11:49:53 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nsep(char const *s, char c)
{
	int		nsep;
	int		i;

	i = 0;
	nsep = 0;
	while (s[i] == c)
		i++;
	while (i < ((int)ft_strlen(s) - 1) && s[i])
	{
		if (s[i + 1] == c && s[i] != c)
			nsep++;
		i++;
	}
	if (s[ft_strlen(s) - 1] != c)
		nsep++;
	return (nsep);
}

void	ft_free(char **s, int nsep)
{
	while (nsep > 0)
	{
		free(s[nsep]);
		nsep--;
	}
	free(s);
}

char	**ft_tab(char const *s, char c)
{
	int		nsep;
	char	**sn;
	int		j;

	j = 0;
	nsep = ft_nsep(s, c);
	if (!(sn = (char**)malloc(sizeof(char *) * (nsep + 1))))
		return (NULL);
	while ((--nsep + 1) >= 0)
	{
		if (!(sn[nsep + 1] = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		{
			ft_free(sn, nsep + 1);
			sn = NULL;
			return (sn);
		}
	}
	return (sn);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**sn;

	if (!s || !(sn = ft_tab(s, c)))
		return (NULL);
	sn[ft_nsep(s, c)] = NULL;
	i = -1;
	k = 0;
	while (s[k] && ++i < ft_nsep(s, c))
	{
		j = -1;
		while (s[k] == c && s[k])
			k++;
		while (s[k] != c && s[k])
		{
			sn[i][++j] = s[k];
			k++;
		}
		sn[i][++j] = '\0';
	}
	return (sn);
}
