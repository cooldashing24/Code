#Print Computer 5 Times Using While Loop
clear
i=1
n=5
while [ $i -le $n ]
do
    echo "$i. Computer"
    i=`expr $i + 1`
done
