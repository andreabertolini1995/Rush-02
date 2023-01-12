rush-02:
	cc -fsanitize=address -g3 -Wall -Wextra -Werror -o rush-02 main.c ft_recursive.c ft_atoi.c ft_utils.c ft_handling_errors.c ft_strings_man.c ft_check_dict.c
fclean:
	rm rush-02