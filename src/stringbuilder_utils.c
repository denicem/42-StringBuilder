/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuilder_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:16:41 by dmontema          #+#    #+#             */
/*   Updated: 2022/03/12 22:46:08 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/stringbuilder.h"

int	sb_append_int(t_stringbuilder *sb, int nbr)
{
	(void) sb;
	(void) nbr;

	return (0);
}

int	sb_append_char(t_stringbuilder *sb, char c)
{
	char	*newstr;
	int		old_len;
	int		i;

	if (!c)
		return (1);
	newstr = calloc(sb->len + 2, sizeof(char));
	if (!newstr)
		return (2);
	i = 0;
	old_len = sb->len;
	while (i < old_len)
	{
		newstr[i] = sb->str[i];
		i++;
	}
	newstr[i] = c;
	sb->len = i++;
	newstr[i] = 0;
	return (0);
}

int	sb_append_str(t_stringbuilder *sb, char *str)
{
	(void) sb;
	(void) str;

	return (0);
}

char	*sb_get_str(t_stringbuilder *sb)
{
	char	*res;
	int		i;

	res = calloc(sb->len + 1, sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (sb->str[i] && i < sb->len)
	{
		res[i] = sb->str[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
