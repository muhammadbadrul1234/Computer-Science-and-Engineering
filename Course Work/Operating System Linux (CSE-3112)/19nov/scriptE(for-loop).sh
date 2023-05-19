#! /usr/bin/bash

# for-loop
n=7
while [ $n -gt 4 ];
do
    echo $n
    n=$((n-1))
done    


# for n in {2..10..2}
# do
#     Sum=$((Sum+n))
#     echo $n
# done
# echo "Sum of 1 to 10 is $Sum"




# s=("SectionA" "SectionB" "SectionC+E" "SectionD")
# for n in ${s[@]}; 
# do
#     echo $n
# done


# n=7
# for((i=1;i<=$n;i++))
# do
#     echo $i
# done
# 