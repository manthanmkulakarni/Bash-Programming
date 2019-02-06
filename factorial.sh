#! bin/sh

factorial ()
{

i=1
fact=1

while [ $i -le $1 ]
do 
fact=$(( $fact * $i ))
i=$(( $i + 1 ))
	
done
return $fact
}

echo "Enter the number"
read n
factorial $n  # Here $n is passed as parameter to factorial function
f=$?	      #To get back the retuen value of function called

echo $f