/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:14:45 by dmontema          #+#    #+#             */
/*   Updated: 2022/03/27 16:45:50 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/stringbuilder.h"

int main(void)
{
	// create and initialize StringBuilder
	t_stringbuilder	*sb;
	char 			*str;

	sb = sb_create();

	// add/append some strings
	sb_append_str(sb, "Hello C-StringBuilder");	// append a string
	sb_append_char(sb, '\n');					// append a char
	sb_append_strn(sb, "Hiiiiii", 2);			// append n characters from the beginning of a string
	sb_append_char(sb, ' ');
	sb_append_int(sb, 42);							// append a int number

	// fetch constructed string from sb to str
	str = sb_get_str(sb);
	printf("%s\n", str);

	// usage of sb_clear
	sb_clear(sb); // clears content from sb -> str from sb is now empty!
	sb_append_str(sb, "Goodbye.");

	free(str); // clean up before fetching from sb again
	str = sb_get_str(sb);
	printf("%s\n", str);

	// clean up
	sb_destroy(&sb);
	free(str);

	return (0);
}
