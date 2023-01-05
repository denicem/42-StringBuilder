/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 03:20:35 by dmontema          #+#    #+#             */
/*   Updated: 2023/01/03 03:20:35 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/stringbuilder.h"

char	*sb_itoa(int n)
{
	char	*res;
	int		numlen;
	int		i;
	long	nbr;

	nbr = n;
	numlen = sb_numlen(nbr);
	res = malloc((numlen + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		res[i++] = '-';
		nbr = -nbr;
	}
	while (i < numlen)
	{
		res[i] = (nbr / sb_pow_int(10, numlen - i - 1)) % 10 + '0';
		++i;
	}
	res[i] = '\0';
	return (res);
}
