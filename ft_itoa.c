/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:58:52 by sharris           #+#    #+#             */
/*   Updated: 2018/07/09 20:58:52 by sharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_pnbr(int nbr)
{
	int		digitpos;
	int		i;
	char	*out;

	i = 10;
	digitpos = 1000000000;
	while (digitpos != 0 && nbr / digitpos == 0)
	{
		digitpos /= 10;
		i--;
	}
	out = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (digitpos == 0)
		out[i++] = '0';
	else
		while (digitpos > 0)
		{
			out[i++] = ((nbr / digitpos) % 10 + '0');
			digitpos /= 10;
		}
	out[i] = '\0';
	return (out);
}

static int get_alloc_size(int nbr)
{
	int		digitpos = 1000000000;
	int		i;

	while (digitpos != 0 && nbr / digitpos == 0)
	{
		digitpos /= 10;
		i--;
	}
	if (nbr < 0)
		return (i + 1);
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	if (NULL == (str = (char *)malloc(sizeof(char) * (get_alloc_size(n) + 1))))
		return (NULL);
	if (n == -2147483648)
		ft_strcpy(&(*str), "-2147483648");
	else
	{
		if (n < 0)
		{
			str[i++] = '-';
			n *= -1;
		}
		ft_strcat(str, get_pnbr(n));
		str[12] = '\0';
	}
	return (str);
}
