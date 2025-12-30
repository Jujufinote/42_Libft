.PHONY : all clean fclean re bonus

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

INCLUDE = ./libft.h

FUNC = atoi \
		bzero \
		calloc \
		isalnum \
		isalpha \
		isascii \
		isdigit \
		isprint \
		itoa \
		memchr \
		memcmp \
		memcpy \
		memmove \
		memset \
		putchar_fd \
		putendl_fd \
		putnbr_fd \
		putstr_fd \
		split \
		strchr \
		strdup \
		striteri \
		strjoin \
		strlcat \
		strlcpy\
		strlen \
		strmapi \
		strncmp \
		strnstr \
		strrchr \
		strtrim \
		substr \
		tolower \
		toupper

SRC = $(foreach f,$(FUNC),Mandatory/ft_$(f)/ft_$(f).c)

FUNC_BONUS = lstadd_back \
				lstadd_front \
				lstclear \
				lstdelone \
				lstiter \
				lstlast \
				lstmap \
				lstnew \
				lstsize

SRC_BONUS = $(foreach f,$(FUNC_BONUS),Bonus/ft_$(f)/ft_$(f)_bonus.c)

OBJ = ${SRC:.c=.o}

OBJ_BONUS = ${SRC_BONUS:.c=.o}

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	ar -rs $(NAME) $(OBJ) $(INCLUDE)

all : $(NAME)

bonus : $(OBJ_BONUS)
	ar -rs $(NAME) $(OBJ_BONUS) $(INCLUDE)

clean :
	rm -f $(OBJ) $(OBJ_BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all
