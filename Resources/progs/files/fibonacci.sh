echo " enter the limit "
read n
echo " the fib series is "
b=0 c=1 d=0 i=0
if [ $n -ge 2 ] then echo " $b $c "
n=`expr $n - 2`
while [ $i -lt $n ] do a=`expr $b + $c`
b=$c c=$a
echo " $c "
i=`expr $i + 1`
done
else
echo " $b "
fi