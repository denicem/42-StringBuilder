/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuilder_utils.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:59:21 by dmontema          #+#    #+#             */
/*   Updated: 2023/01/05 16:59:21 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGBUILDER_UTILS_H
#define STRINGBUILDER_UTILS_H

// TODO: move src files to own sub dir.

#include <string.h>

void	*sb_calloc(size_t count, size_t size);
void	sb_bzero(void *s, size_t n);
size_t	sb_strlen(char const *s);
char	*sb_itoa(int n);
int		sb_numlen(int nbr);
int		sb_pow_int(int nbr, int power);

#endif