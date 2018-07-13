/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:20:02 by sharris           #+#    #+#             */
/*   Updated: 2018/07/12 21:20:02 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *u1;
	unsigned char *u2;

	u1 = (unsigned char *) s1;
	u2 = (unsigned char *) s2;
	while (n-- > 0 && *u1 && *u2)
	{
		if (*u1 != *u2)
			return ((int) (*u1 - *u2));
		u1++;
		u2++;
	}
	return ((int) (*u1 - *u2));
}
