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
	// sb_append_char(sb, 'H');
	// sb_append_char(sb, 'e');
	// sb_append_char(sb, 'l');
	// sb_append_char(sb, 'l');
	// sb_append_char(sb, 'o');
	// sb_append_char(sb, ' ');
	// sb_append_str(sb, "World\n");
	// sb_append_int(sb, 42);
	
	char *str = sb_get_str(sb);
	printf("%s(len: %d)\n", str, sb->len);
	if (!(*str))
		printf("OK\n");
	sb_destroy(sb);
	free(str);
	// system("leaks a.exe");
	return (0);
}