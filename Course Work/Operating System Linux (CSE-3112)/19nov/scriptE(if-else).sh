#! /usr/bin/bash

# Operators
#         .eq=>equal to
#         .ne=>not equal to
#         .gt=>greater than
#         .lt=>less than
#         .ge=>greater than or equal to
#         .le=>less than or equal to


# if-fi
# if-else-fi
# if-elif-else-fi
# nested if-fi

# if-fi(Example 1)

read -p "Enter a number1: " Num1
read -p "Enter a number2: " Num2
read -p "Enter a number3: " Num3

if [ $Num1 -gt $Num2] && [$Num1 -gt $Num3 ]; then
    echo " Number 1 is greater"
elif [ $Num2 -gt $Num1] && [$Num2 -gt $Num3 ]; then
    echo "Number 1 is greater"
else
    echo "Number 3 is greater"
fi