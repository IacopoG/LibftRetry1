/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguscett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 11:30:33 by iguscett          #+#    #+#             */
/*   Updated: 2021/02/10 12:08:57 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*tmp;

	if (lst && *lst)
	{
		ptr = *lst;
		while (ptr)
		{
			tmp = ptr->next;
			del(ptr->content);
			free(ptr);
			ptr = tmp;
		}
		*lst = NULL;
	}
}
