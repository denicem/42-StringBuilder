/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:12:24 by fquist            #+#    #+#             */
/*   Updated: 2022/03/13 19:13:28 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/stringbuilder.h"

/*	Calculating the length of the parameter nbr and returns it. */
static int	ft_get_numlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

/*
DESCRIPTION
	ft_itoa() allocates (with malloc(3)) and returns a string
	representing the integer received as an argument.
	Negative numbers are handled.
RETURN VALUES
	The string representing the integer. NULL if the
	allocation fails.
*/
char	*ft_itoa(int n)
{
	int		len;
	long	nbr;
	char	*str;

	len = ft_get_numlen(n);
	nbr = n;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nbr)
	{
		str[len] = nbr % 10 + '0';
		len--;
		nbr = nbr / 10;
	}
	return (str);
}
