echo "Enter the String"
read str
len=`echo $str | wc -c`
len=`expr $len - 1`
echo "the length of the string is: $len"
while [ $len -gt 0 ]; do
        temp=`echo $str | cut -c $len`
        rev=`echo $rev$temp`
        len=`expr $len - 1`
done
echo "The reversed string is: $rev"
if [ "$rev" = "$str" ]; then
        echo "$str is a palindrome"
else
        echo "$str is not a palindrome"
fi