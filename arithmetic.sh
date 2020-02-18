
echo "Enter the first number : "
    read a
    echo "Enter the second number : "
    read b

val=`expr $a + $b`
echo "a + b : $val"
echo "sum of two value is $val"
val=`expr $a - $b`
echo "a - b : $val"
echo "Difference of two value is $val"
val=`expr $a \* $b`
echo "a * b : $val"
echo "Product of two value is $val"
val=`expr $b / $a`
echo "b / a : $val"
echo "Division of two value is $val"
val=`expr $b % $a`
echo "b % a : $val"
echo "Modulus of two value is $val"

