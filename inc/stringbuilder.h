/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuilder.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:47:05 by dmontema          #+#    #+#             */
/*   Updated: 2022/03/12 22:14:39 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: replace all libc funcs with libft funcs

#ifndef STRINGBUILDER_H
# define STRINGBUILDER_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stringbuilder
{
	char	*str;
	int		len;
}	t_stringbuilder;

t_stringbuilder	*sb_create();
int		sb_append_int(t_stringbuilder *sb, int nbr);
int		sb_append_char(t_stringbuilder *sb, char c);
int		sb_append_str(t_stringbuilder *sb, char *str);
char	*sb_get_str(t_stringbuilder *sb);
int		sb_destroy(t_stringbuilder *sb);

# endif