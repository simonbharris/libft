/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 10:41:10 by sharris           #+#    #+#             */
/*   Updated: 2018/11/19 10:41:34 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void goto_listelement(t_list **atmp, t_list **alast, int *aind)
{
	if (*aind == -1)
		while((*atmp)->next)
			*atmp = (*atmp)->next;
	else
		while (*atmp  && *aind-- > 0)
		{
			*alast = *atmp;
			*atmp = (*atmp)->next;
		}
}

/*
** Removes from an link-list, the list positioned at the ind-th 0-based element.
*/

t_list *ft_lstpop(t_list **alst, int ind)
{
	t_list *tmp;
	t_list *last;
	t_list *ret;

	tmp = NULL;
	if (alst && (tmp = *alst))
	{
		goto_listelement(&tmp, &last, &ind);
		if ((ret = tmp) && ind == 0)
		{
			if (last)
				last->next = tmp->next;
			else
				*alst = NULL;
			ret->next = NULL;
		}
		return (ret);
	}
	else
		return (NULL);
}
