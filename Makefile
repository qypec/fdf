# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yquaro <yquaro@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/16 09:39:06 by yquaro            #+#    #+#              #
#    Updated: 2019/12/16 10:15:07 by yquaro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include inc/fdf.mk

all:
	@make -C libft/ all
	@make -C src/ all
	@make -C obj/ all

clean:
	@make -C libft/ clean
	@make -C src/ clean
	@make -C obj/ clean

fclean:
	@make -C libft/ fclean
	@make -C src/ fclean
	@make -C obj/ fclean

re: fclean all