#! /usr/bin/sh

read -p "Enter Country name : " Country
read -p "Enter Age : " Age

if [ $Country = "BD" ];
then
    if [ $Age -ge 18 ];
    then
        echo "You can Vote."
    else
        echo "You can't Vote."
    fi
fi
