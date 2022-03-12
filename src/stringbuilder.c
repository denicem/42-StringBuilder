/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuilder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:53:02 by dmontema          #+#    #+#             */
/*   Updated: 2022/03/12 22:09:40 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/stringbuilder.h"

t_stringbuilder	*sb_create()
{
	t_stringbuilder	*sb;

	sb = calloc(1, sizeof(t_stringbuilder));
	if (!sb)
		return (NULL);
	sb->str = calloc(MIN_SIZE, sizeof(char));
	sb->str = 0;
	sb->len = 0;
	sb->cap = MIN_SIZE;
	return (sb);
}

int	sb_destroy(t_stringbuilder *sb)
{
	return (0);
}
