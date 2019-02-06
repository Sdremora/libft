NAME := libft.a
INCLUDES := includes/
LST_DIR := lst/
MEM_DIR := mem/
STR_DIR := str/
OTHER_DIR := other/
LST_SRCS := ft_lst_attach.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_lstreverse.c

MEM_SRCS := ft_bzero.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_get_bits.c

STR_SRCS := ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c \
			ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c \
			ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_str_indexof.c \
			ft_str_indexof_str.c ft_str_put.c ft_str_reverse.c

OTHER_SRCS :=	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
				ft_isprint.c ft_itoa.c ft_pow.c ft_putchar_fd.c ft_putchar.c \
				ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c ft_putnbr.c \
				ft_putstr_fd.c ft_putstr.c ft_tolower.c ft_toupper.c get_next_line.c \
				ft_free.c ft_get_bits.c ft_wchar_to_utf8.c

FLAGS := -Wall -Wextra -Werror
DEBUG_FLAGS := -g -O0

GREEN=\033[0;32m
NC=\033[0m # No Color

VPATH := $(LST_DIR) $(MEM_DIR) $(STR_DIR) $(OTHER_DIR)
.PHONY: clean re all fclean add_flags debug

OBJ = $(patsubst %.c, %.o, $(LST_SRCS) $(MEM_SRCS) $(STR_SRCS) $(OTHER_SRCS))

all: $(NAME)

debug: fclean add_flags all

test:
	gcc -lft -L. test.c -o test.out -I$(INCLUDES)

add_flags:
	$(eval FLAGS += $(DEBUG_FLAGS))

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	@echo "${GREEN}$(NAME) was created ${NC}"

%.o: %.c
	gcc $(FLAGS) -c -I$(INCLUDES) $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
