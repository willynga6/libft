NAME	=	libft.a
AR		=	ar -rcs
CC		=	gcc
FLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f
NAME	=	libft.a
INCLUDE	=	include

#------------Fonctions obligatoires-----------------
SRC		=	src/ft_isalpha.c src/ft_isdigit.c src/ft_isalnum.c       \
src/ft_isascii.c src/ft_isprint.c src/ft_memset.c src/ft_bzero.c     \
src/ft_memcpy.c src/ft_memmove.c src/ft_memchr.c src/ft_memcmp.c     \
src/ft_strlen.c src/ft_strchr.c src/ft_strrchr.c src/ft_strncmp.c    \
src/ft_strnstr.c src/ft_strlcat.c src/ft_strlcpy.c src/ft_toupper.c  \
src/ft_tolower.c src/ft_atoi.c src/ft_calloc.c src/ft_strdup.c       \
src/ft_substr.c src/ft_strjoin.c src/ft_strtrim.c src/ft_split.c     \
src/ft_itoa.c src/ft_strmapi.c src/ft_striteri.c src/ft_putchar_fd.c \
src/ft_putstr_fd.c src/ft_putendl_fd.c src/ft_putnbr_fd.c

OBJ		=	$(SRC:.c=.o)

#------------Fonctiions bonus-----------------
BONUS	=	src/ft_lstnew.c src/ft_lstadd_front.c src/ft_lstsize.c \
src/ft_lstlast.c src/ft_lstadd_back.c src/ft_lstdelone.c src/ft_lstclear.c \
src/ft_lstiter.c src/ft_lstmap.c

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

