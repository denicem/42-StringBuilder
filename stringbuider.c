/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuider.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:53:02 by dmontema          #+#    #+#             */
/*   Updated: 2022/03/12 18:07:14 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/stringbuilder.h"

t_stringbuilder	*sb_create()
{
	t_stringbuilder	*sb;

	sb->str = NULL;
	sb->len = 0;
	return (sb);
}