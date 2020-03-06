# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    average_op.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/05 16:34:25 by amalsago          #+#    #+#              #
#    Updated: 2020/03/05 23:10:19 by amalsago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Executable path
PUSH_SWAP=./push_swap
# How many times repeating a test to get average
NTIMES=1
# Array of ranges
declare -a array=( 2 3 4 5 6 7 8 9 10 25 50 100 500 1000 ) 
# Length of array
length=${#array[@]}
# Repeat the while loop for each field of array
printf "The average number of operations repeated $NTIMES times\n"
for (( i=0; i < ${length}; i++ ))
do
	I=0
	SUM=0
	FROM=1
	TO=${array[$i]}
	printf "[%d %5d] " $FROM $TO
	while [ $I -le $NTIMES ]; do
		ARG=$(ruby -e "puts ($FROM..$TO).to_a.shuffle.join(' ')");
		NOP=$($PUSH_SWAP $ARG | wc | awk '{ print $1 }');
		SUM=$(expr $SUM + $NOP)
		I=$(expr $I + 1)
		if [ $I -gt $NTIMES ]; then
			AVERAGE=$(expr $SUM / $NTIMES)
			printf "%-d\n" $AVERAGE
		fi
	done
done
