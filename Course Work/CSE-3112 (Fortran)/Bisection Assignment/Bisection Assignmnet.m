clc;
clear all;
close all;

x= input('Enter Function with right side zero: ','s');
f=inline(x);
a=double(input('Enter the first value of guess interval: '));
b=double(input('Enter the 2nd value of guess interval: '));
error=input('Enter the allowed error: ');
v1=f(a);
v2=f(b);
v=v1*v2;
if(v<0)
    c=(a+b)/2;
    err=abs(f(c));
else
    while v > 0
        fprintf("The guess in inconsent! Enter new guess: \n");
        a=input("Enter the first value of guess interval: "); 
        b=input("Enter the end value of guess interval: ");
        a=f(a);
        v2=f(b);
        v=v1*v2;
    end
end

while err>error
  if f(c)>0
    b=c;
  else
    a=c;
  end
  c=(a+b)/2;
  err=abs(f(c));
end
fprintf("The required root of the equation is: %f\n",c);