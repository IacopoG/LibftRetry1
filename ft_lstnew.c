/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iacopoguscetti <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:25:55 by iacopogus         #+#    #+#             */
/*   Updated: 2021/01/18 22:19:06 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list		*entry;

	if (!(entry = (t_list *)malloc(sizeof(*entry))))
		return (NULL);
	entry->content = (void *)content;
	entry->next = NULL;
	return (entry);
}
