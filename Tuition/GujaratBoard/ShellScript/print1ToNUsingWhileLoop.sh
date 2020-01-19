#Print 1 To N Using While Loop
clear
echo -n "Enter number : "
read n
i=1
while [ $i -le $n ]
do
    echo "$i"
    i=`expr $i + 1`
done
