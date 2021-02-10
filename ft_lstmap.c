/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguscett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 14:49:01 by iguscett          #+#    #+#             */
/*   Updated: 2021/01/18 22:17:06 by iacopogus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*error(t_list *lst, void (*del)(void *))
{
	while (lst)
	{
		del(lst->content);
		free(lst);
		lst = lst->next;
	}
	lst = NULL;
	return (lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *first;
	t_list *new;

	if (lst)
	{
		if (!(new = ft_lstnew(f(lst->content))))
			return (error(new, del));
		if (!(first = ft_lstnew(f(lst->content))))
			return (error(new, del));
		while (lst && lst->next)
		{
			lst = lst->next;
			if (!(new = ft_lstnew(f(lst->content))))
				return (error(new, del));
			ft_lstadd_back(&first, new);
		}
	}
	else
		return (NULL);
	return (first);
}
