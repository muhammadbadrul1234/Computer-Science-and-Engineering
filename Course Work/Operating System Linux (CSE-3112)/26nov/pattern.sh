#! /usr/bin/sh

for i in 1 2 3 4 5
do
    for j in 5 4 3 2 1
    do
        if [ $j -ge $i ]
        then
            echo -n " "
        fi
    done
    for k in 1 2 3 4 5
    do
        if [ $k -le $i ]
        then
            echo -n "**"
        fi
    done
    echo
done

