# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/30 17:04:58 by jfox              #+#    #+#              #
#    Updated: 2025/12/30 17:46:06 by jfox             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJECT_DIR ?= ./object_files
SRC_DIR = ./src
INC_DIR = ./header

SRCC = ft_printf.c printf_putchar_fd.c printf_putnbr_fd.c printf_putvoid.c \
printf_putnbr_unsigned_fd.c printf_putnbr_hex_fd.c printf_putstr_fd.c ft_strlen.c

OFILES = $(SRCC:%.c=$(OBJECT_DIR)/%.o)
CC = cc
CFLAGS += -Wall -Wextra -Werror -g -I$(INC_DIR) -MMD -MP
NAME = libftprintf.a

all: $(NAME)

$(OBJECT_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJECT_DIR)
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OFILES)
	@ar rcs $(NAME) $(OFILES)
	@echo "\033[32m"
	@echo " ███╗   ███╗ █████╗ ██╗  ██╗███████╗"
	@echo " ████╗ ████║██╔══██╗██║ ██╔╝██╔════╝"
	@echo " ██╔████╔██║███████║█████╔╝ █████╗  "
	@echo " ██║╚██╔╝██║██╔══██║██╔═██╗ ██╔══╝  "
	@echo " ██║ ╚═╝ ██║██║  ██║██║  ██╗███████╗"
	@echo " ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝"
	@echo "\033[0m"
	@echo "The Object_Files have been made."
	@echo "The Library has been made."

clean:
	@echo "\033[33m"
	@echo "  ██████╗██╗     ███████╗ █████╗ ███╗   ██╗"
	@echo " ██╔════╝██║     ██╔════╝██╔══██╗████╗  ██║"
	@echo " ██║     ██║     █████╗  ███████║██╔██╗ ██║"
	@echo " ██║     ██║     ██╔══╝  ██╔══██║██║╚██╗██║"
	@echo " ╚██████╗███████╗███████╗██║  ██║██║ ╚████║"
	@echo "  ╚═════╝╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝"
	@echo "\033[0m"
	@rm -rf $(OBJECT_DIR)
	@echo "The Object_Files were removed successfully."

fclean: clean
	@rm -f $(NAME)
	@echo "The Library was removed successfully."

re: print_re fclean $(NAME)

print_re:
	@echo "\033[31m"
	@echo "██████╗ ███████╗"
	@echo "██╔══██╗██╔════╝"
	@echo "██████╔╝█████╗  "
	@echo "██╔══██╗██╔══╝  "
	@echo "██║  ██║███████╗"
	@echo "╚═╝  ╚═╝╚══════╝"
	@echo "\033[0m"
	@echo "Rebuilding the Library."

.PHONY: all clean fclean re print_re

-include $(OFILES:.o=.d)
