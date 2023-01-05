/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:22:45 by dmontema          #+#    #+#             */
/*   Updated: 2023/01/02 17:22:45 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/stringbuilder.h"

int	sb_numlen(int nbr)
{
	int	res;

	res = 0;
	if (nbr < 0)
	{
		++res;
		nbr = -nbr;
	}
	while (nbr)
	{
		++res;
		nbr /= 10;
	}
	return (res);
}
