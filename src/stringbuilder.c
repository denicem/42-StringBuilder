/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuilder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:53:02 by dmontema          #+#    #+#             */
/*   Updated: 2022/03/27 16:46:19 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/stringbuilder.h"
#include "../inc/stringbuilder_utils.h"

t_stringbuilder	*sb_create(void)
{
	t_stringbuilder	*sb;

	sb = sb_calloc(1, sizeof(t_stringbuilder));
	if (!sb)
		return (NULL);
	sb->str = sb_calloc(1, sizeof(char));
	if (!sb->str)
	{
		free(sb);
		return (NULL);
	}
	sb->len = 0;
	return (sb);
}

int	sb_clear(t_stringbuilder *sb)
{
	free(sb->str);
	sb->str = sb_calloc(1, sizeof(char));
	sb->len = 0;
	if (!sb->str)
	{
		free(sb);
		return (SB_FAILURE);
	}
	return (SB_SUCCESS);
}

int	sb_destroy(t_stringbuilder **sb)
{
	free((*sb)->str);
	(*sb)->str = NULL;
	(*sb)->len = 0;
	free(*sb);
	*sb = NULL;
	return (SB_SUCCESS);
}
