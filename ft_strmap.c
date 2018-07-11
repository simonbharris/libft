/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 13:38:47 by sharris           #+#    #+#             */
/*   Updated: 2018/07/11 13:38:47 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strmap(char const *s, char (*f)(char))
{
	int		size;
	int		i;
	char	*out;

	i = 0;
	size = 0;
	while (s[size])
		size++;
	out = ft_strnew(size);
	while (i < size)
	{
		out[i] = f(s[i]);
		i++;
	}
	return (out);
}
