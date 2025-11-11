NAME	=	libft.a
AR		=	ar -rcs
CC		=	gcc
FLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f
NAME	=	libft.a
INCLUDE	=	include

#------------Fonctions obligatoires-----------------
SRC		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c       \
ft_isascii.c ft_isprint.c ft_memset.c ft_bzero.c     \
ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c     \
ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c    \
ft_strnstr.c ft_strlcat.c ft_strlcpy.c ft_toupper.c  \
ft_tolower.c ft_atoi.c ft_calloc.c ft_strdup.c       \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c     \
ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ		=	$(SRC:.c=.o)

#------------Fonctiions bonus-----------------
BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
ft_lstiter.c ft_lstmap.c

BONUS_OBJ	=	$(BONUS:.c=.o)

#------------Règles compilation-----------------
%.o:	%.c
	$(CC) $(FLAGS) -I $(INCLUDE) -c $< -o $@

.PHONY: all clean fclean re bonus
#------------Règles principales-----------------
all: $(NAME)

$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus:	$(OBJ)	$(BONUS_OBJ)
	$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

# build a shared library for unit testers that expect libft.so
SO_SRC = $(SRC) $(BONUS)
so:
	@echo "Building libft.so (shared library)..."
	$(CC) $(FLAGS) -I $(INCLUDE) -fPIC -c $(SO_SRC)
	$(CC) -shared -o libft.so $(SO_SRC:.c=.o)
	@echo "libft.so created."

