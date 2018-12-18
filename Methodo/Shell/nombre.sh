#!/bin/bash

echo "Enter nb: "
read -r n
n=$((n + 1))
s=0
for((i=0 ; $((n - i)) ; i=$((i + 1)) ))
	do s=$((s + i))
		#echo $s
done
echo $s


#scp recherche.sh rnehlil@bocal.cs.univ-paris8.fr 