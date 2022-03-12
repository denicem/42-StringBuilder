/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuilder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:53:02 by dmontema          #+#    #+#             */
/*   Updated: 2022/03/12 22:14:51 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/stringbuilder.h"

t_stringbuilder	*sb_create()
{
	t_stringbuilder	*sb;

	sb = calloc(1, sizeof(t_stringbuilder));
	if (!sb)
		return (NULL);
	sb->str = calloc(1, sizeof(char));
	sb->str = 0;
	sb->len = 0;
	return (sb);
}

int	sb_destroy(t_stringbuilder *sb)
{
	return (0);
}
