/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:14:45 by dmontema          #+#    #+#             */
/*   Updated: 2022/03/13 16:14:45 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/stringbuilder.h"



int main(void)
{
	t_stringbuilder *sb = sb_create();
	sb_append_char(sb, 'H');
	sb_append_char(sb, 'e');
	sb_append_char(sb, 'l');
	sb_append_char(sb, 'l');
	sb_append_char(sb, 'o');
	sb_append_char(sb, ' ');
	// sb_append_char(sb, 'W');
	// sb_append_char(sb, 'o');
	// sb_append_char(sb, 'r');
	// sb_append_char(sb, 'l');
	// sb_append_char(sb, 'd');
	// sb_append_char(sb, '!');
	sb_append_str(sb, "World!!!!");
	
	char *str = sb_get_str(sb);
	printf("%s (len: %d)\n", str, sb->len);
	// free(str);
	// system("leaks a.exe");
	return (0);
}