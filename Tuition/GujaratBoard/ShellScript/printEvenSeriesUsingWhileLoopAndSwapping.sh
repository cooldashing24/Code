# Print Even Series 
# Between Provided Numbers 
# Using While And Swapping
clear
echo -n "Enter number1 : "
read num1
echo -n "Enter number2 : "
read num2

i=$num1
n=$num2
if [ $num1 -gt $num2 ]
then
    n=$num1
    i=$num2
fi

rem=`expr $i % 2`
if [ $rem -eq 1 ]
then
    i=`expr $i + 1`
fi

while [ $i -le $n ]
do
    echo "$i"
    i=`expr $i + 2`
done
