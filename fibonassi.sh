#! bin/bash

echo "Enter the value of n"
read n
fib1=0
fib2=1
for((x=0;x<$n;x++))
do
echo $fib1
	temp=$fib2
	fib2=$[$temp+$fib1]
	fib1=$temp
done

echo "q to quit"
read option

if [ $option == q ]
then
clear

fi