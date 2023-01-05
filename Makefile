NAME		=	stringbuilder.a
NAME_TESTER	=	test

CC			=	gcc
AR			=	ar rc
CC_FLAGS	=	-Wall -Wextra -Werror

SRC_DIR		=	src/
SRCS		=	$(shell find $(SRC_DIR) -name "*.c")
# SRC_TESTER	=	./test/main.c ## TODO: main.c to own dir

OBJ_DIR		=	obj/
OBJS		=	$(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRCS))

DEPS		=	$(OBJS:.o=.d)
D_FLAGS		=	-MMD -MP

INCLUDE		=	-I./inc/

# **************************************************************************** #
#	RULES																	   #
# **************************************************************************** #

all: $(NAME)

-include $(DEPS)

test: main.c $(NAME)
	@printf $(BLUE)"Linking library file to binary file"$(RESET)"\r"
	@$(CC) $(CC_FLAGS) main.c -o $(NAME_TESTER) $(NAME)
	@printf $(SPACE)$(GREEN)"[✓]\n"$(RESET)
	@echo "\t\t"$(GREEN)$(BOLD)"COMPLETE!"$(RESET)"\n"
	@printf $(MAGENTA)"\t\tName of executable: "$(RESET)$(BOLD)$(MAGENTA_BG)" $(NAME_TESTER) "$(RESET)"\n\n"

$(NAME): $(OBJS)
	@printf $(BLUE)"Linking objects to a library file\r"$(RESET)
	@$(AR) $(NAME) $(OBJS)
	@printf $(SPACE)$(GREEN)"[✓]\n"$(RESET)
	@printf $(GREEN)$(BOLD)"\t\tCOMPLETE!\n\n"$(RESET)
	@printf $(MAGENTA)"\t\tName of library: "$(RESET)$(BOLD)$(MAGENTA_BG)" $(NAME) "$(RESET)"\n\n"

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
	@mkdir -p $(dir $@)
	@printf $(BLUE)$(BOLD)"\rCompiling: "$(CYAN)"$(notdir $<)\r"
	@$(CC) $(CC_FLAGS) -c $< -o $@
	@printf $(SPACE)$(GREEN)"[✓]\n"$(RESET)

clean:
	@printf $(MAGENTA)"Removing object files...\r"$(RESET)
	@rm -rf $(OBJ_DIR)
	@printf $(SPACE)$(GREEN)"[✓]\n"$(RESET)

fclean: clean
	@printf $(MAGENTA)"Removing library & binary files...\r"$(RESET)
	@rm -rf $(NAME)
	@rm -rf $(NAME_TESTER)
	@printf $(SPACE)$(GREEN)"[✓]\n\n"$(RESET)

re: fclean all

.PHONY: all clean fclean re test

# **************************************************************************** #
#	TEXT MODIFIERS / FORMATITING CODES										   #
# **************************************************************************** #

RED =				"\e[31m"
GREEN =				"\e[32m"
YELLOW =			"\e[33m"
BLUE =				"\e[34m"
MAGENTA =			"\e[35m"
CYAN =				"\e[36m"
LIGHTGRAY =			"\e[37m"
DARKGRAY =			"\e[90m"
LIGHTRED =			"\e[91m"
LIGHTGREEN =		"\e[92m"
LIGHTYELLOW =		"\e[93m"
LIGHTBLUE =			"\e[94m"
LIGHTMAGENTA =		"\e[95m"
LIGHTCYAN =			"\e[96m"
RED_BG =			"\e[41m"
GREEN_BG =			"\e[42m"
YELLOW_BG =			"\e[43m"
BLUE_BG =			"\e[44m"
MAGENTA_BG =		"\e[45m"
CYAN_BG =			"\e[46m"
LIGHTGRAY_BG =		"\e[47m"
DARKGRAY_BG =		"\e[100m"
LIGHTRED_BG =		"\e[101m"
LIGHTGREEN_BG =		"\e[102m"
LIGHTYELLOW_BG =	"\e[103m"
LIGHTBLUE_BG =		"\e[104m"
LIGHTMAGENTA_BG =	"\e[105m"
LIGHTCYAN_BG =		"\e[106m"
BOLD =				"\e[1m"
ITALIC =			"\e[3m"
UNDERLINED =		"\e[4m"
RESET =				"\e[0m"
SPACE =				"\e[50C"