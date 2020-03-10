# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    average_op.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/05 16:34:25 by amalsago          #+#    #+#              #
#    Updated: 2020/03/10 14:39:32 by amalsago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Executable path
PUSH_SWAP=./push_swap
# How many times repeating a test to get average
NTIMES=100
# Array of ranges
declare -a array=( 2 3 4 5 6 7 8 9 10 25 50 100 500 900 1000 )
# Length of array
length=${#array[@]}
# Repeat the while loop for each field of array
printf "The average number of operations repeated $NTIMES times\n"
BEST=100000000000
WORST=0
for (( i=0; i < ${length}; i++ ))
do
	I=0
	SUM=0
	FROM=1
	TO=${array[$i]}
	printf "[%d %5d] " $FROM $TO
	while [ $I -lt $NTIMES ]; do
		ARG=$(ruby -e "puts ($FROM..$TO).to_a.shuffle.join(' ')");
		NOP=$($PUSH_SWAP $ARG | wc | awk '{ print $1 }');
		if [ $NOP -lt $BEST ]; then
			BEST=$NOP
		fi
		if [ $NOP -gt $WORST ]; then
			WORST=$NOP
		fi
		WORST=$NOP
		SUM=$(expr $SUM + $NOP)
		I=$(expr $I + 1)
	done
	AVERAGE=$(expr $SUM / $NTIMES)
	printf "av: %-5d | " $AVERAGE
	printf "bc: %-5d | " $BEST
	printf "wc: %-5d\n" $WORST
done
