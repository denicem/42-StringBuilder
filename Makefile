NAME	=	stringbuilder.a

SRCS	=	src/stringbuilder.c \
			src/stringbuilder_append.c \
			src/stringbuilder_utils.c \
			src/sb_strlen.c \
			src/sb_itoa.c \
			src/sb_calloc.c \
			src/sb_bzero.c \
			src/sb_numlen.c \
			src/sb_pow_int.c

OBJS	=	$(SRCS:.c=.o)

AR		=	ar rc
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

# COLOURS
RED		=	\033[0;31m
GREEN	=	\033[0;32m
YELLOW	=	\033[0;33m
BLUE	=	\033[0;34m
CYAN	=	\033[0;36m
RESET	=	\033[m

# **************************************************************************** #
#	RULES																	   #
# **************************************************************************** #

all: $(NAME)

test: main.c $(NAME)
	@printf "$(CYAN)Building test cases...$(RESET)\n"
	@$(CC) $(CFLAGS) $(NAME) main.c -o test $(NAME)
	@printf "$(GREEN)\tCOMPLETE!$(RESET)\n"

$(NAME): $(OBJS)
	@printf "$(CYAN)Installing StringBuilder...$(RESET)\n"
	@$(AR) $(NAME) $(OBJS)
# @$(CC) $(CFLAGS) $(OBJS) main.c -o stringbuilder
	@printf "$(GREEN)\tCOMPLETE!$(RESET)\n"

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	@rm -f $(OBJS)
	@printf "$(GREEN)Cleaning done.$(RESET)\n"

fclean: clean
	@rm -f $(NAME)
	@rm -f test

re: fclean all