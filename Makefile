# **************************************************************************** #
#                                   LIBFT                                      #
# **************************************************************************** #

NAME	:= libft.a

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror -I.

AR		:= ar rcs
RM		:= rm -f

SRC_DIR	:= .
OBJ_DIR	:= obj

SRCS	:= $(wildcard $(SRC_DIR)/*.c $(SRC_DIR)/*/*.c)
OBJS	:= $(SRCS:%.c=$(OBJ_DIR)/%.o)
DEPS	:= $(OBJS:.o=.d)

GREEN	:= \033[0;32m
YELLOW	:= \033[0;33m
RED		:= \033[0;31m
RESET	:= \033[0m

.PHONY: all clean fclean re bonus norm

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)[Archiving]$(RESET) $(NAME)"
	@$(AR) $@ $^
	@echo "$(GREEN)[OK] Library built successfully!$(RESET)"

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -MMD -MP -c $< -o $@
	@echo "$(GREEN)[Compiled]$(RESET) $<"

-include $(DEPS)

clean:
	@echo "$(RED)[Cleaning objects...]$(RESET)"
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@echo "$(RED)[Removing library...]$(RESET)"
	@$(RM) $(NAME)

re: fclean all

bonus: all

norm:
	@echo "$(YELLOW)[Running Norminette...]$(RESET)"
	@norminette $(SRCS)
	@echo "$(GREEN)[OK] Norminette check passed!$(RESET)"