# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    rand_arg.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/05 16:34:25 by amalsago          #+#    #+#              #
#    Updated: 2020/03/10 14:53:22 by amalsago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP=./push_swap
CHECKER=./checker
if [[ ! -f $PUSH_SWAP || ! -f $CHECKER ]]; then
	printf "$PUSH_SWAP or $CHECKER aren't exist"
	exit 1
fi

while true; do
	RAND=$(ruby -e "puts rand(1..1000)")
	ARG=$(ruby -e "puts (1..$RAND).to_a.shuffle.join(' ')");
	$PUSH_SWAP $ARG | $CHECKER $ARG
	if [ $? -eq 1 ]; then
		echo $ARG
		break
	fi
done
