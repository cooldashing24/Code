# Print Even Series 
# Between Provided Numbers 
# Using While Loop
clear
echo -n "Enter starting number : "
read start
echo -n "Enter ending number : "
read end

i=$start
n=$end
if [ $start -ge $end ]
then
    echo "Starting # must be less than ending #"
    exit
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

echo "Start : $start"
