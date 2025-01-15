#COLORS
CYAN 	= \033[1;36m
GREEN   = \033[32m

#FILES
NAME = push_swap
SRCS = srcs/moves/do_move.c srcs/moves/push.c srcs/moves/reverse_rotate.c srcs/moves/rotate.c srcs/moves/small_sort.c srcs/moves/swap.c \
		srcs/push_swap/big_sort.c srcs/push_swap/check_input.c srcs/push_swap/cost.c srcs/push_swap/init_stack.c srcs/push_swap/position.c srcs/push_swap/push_swap.c srcs/push_swap/stack.c \
		srcs/utils/general_utils.c srcs/utils/extra_utils.c
OBJS = $(SRCS:.c=.o)

#FLAGS
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

#COMMANDS
RM = rm -rf

#RULES
all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(CYAN)----> COMPILATION IS DONE! 🫡 <----"

srcs/%.o: srcs/%.c
	@$(CC) $(CFLAGS) -c $< -o $@


clean: 
	@$(RM) $(OBJS)
	@echo "$(CYAN)----> OBJS CLEANED 👌 <----"

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re