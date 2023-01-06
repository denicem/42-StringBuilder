# C StringBuilder (42)

While working on projects from the 42 core curriculum I have to deal with a lot of memory management, especially if I want to work with strings in C. To simplify things, I implemented a simple string builder.<br>
This StringBuilder takes care of the memory management. You don't have to worry about how much memory you have to allocate. Just give as much content/text as you want and it will take care of the rest. Cleaning/Freeing up memory is also done in just one or two functions.<br>

This project was implemented in compliance with the norm(inette) of 42. So if you like this and you'd like to add this to your Libft library, feel free to do so!<br>
It was very useful for the minishell project, since you have to deal with a lot of the user input and the environment variables.<br>
If you come across any issues or have any suggestions, please don't hesitate to contact me or send a pull request.

---
## Usage:
To use this library follow these simple steps:

1. Make the library
``` bash
make
make example # compile the example file (optional)
```
2. Include the header file in your source files
``` C
#include "path_to_stringbuilder/stringbuilder.h"

// TIP: If you include the path in your Makefile with the "-I" flag, then path_to_stringbuilder is not needed.
```

3. Compile your sources with the library
``` bash
gcc *.c path_to_stringbuilder/stringbuilder.a
```

<br>

### Structure of the StringBuilder
``` C
typedef struct s_stringbuilder
{
	char	*str;	// the string itself
	int		len;	// the current length of the constructed string
}	t_stringbuilder;
```

### Available functions to use:

`sb_create`,
`sb_destroy`,
`sb_append_char`,
`sb_append_str`,
`sb_append_strn`,
`sb_append_int`,
`sb_clear`,
`sb_get_str`

<br>

### Example:

``` C
// create and initialize StringBuilder
t_stringbuilder *sb;
char            *str;

sb = sb_create();

// add/append some strings
sb_append_str(sb, "Hello C-StringBuilder"); // append a string
sb_append_char(sb, '\n');                   // append a char
sb_append_strn(sb, "Hiiiiii", 2);           // append n characters from the beginning of a string
sb_append_char(sb, ' ');
sb_append_int(sb, 42);                      // append a int number

// fetch/copying constructed string from sb to str
str = sb_get_str(sb);
printf("%s\n", str);
printf("Size of sb: %d\n", sb->len);

// usage of sb_clear
sb_clear(sb);                               // clears content from sb -> str from sb is now empty!
sb_append_str(sb, "Goodbye.");

free(str);                                  // clean up before fetching from sb again
str = sb_get_str(sb);
printf("%s\n", str);

// clean up
sb_destroy(&sb);
free(str);
```
Output:
```
Hello C-Stringbuilder
Hi 42
Size of sb: 27
Goodbye.
```
