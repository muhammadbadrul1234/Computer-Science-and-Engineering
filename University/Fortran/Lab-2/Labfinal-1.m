%Trapezoidal Rule
clc;
clear all;
close all;

x = input("Please enter the function :", "s");
f = inline(x);
a = input("Enter the lower limit a = ");
b = input("Enter the upper limit b = ");
n = input("Enter the number of intervals n = ");
h = (b-a)/n;
i1 = 0.0;

% 022LB
% 200UA
%6121RD

for i=a+h:h:b-h
    i1 = i1 + 2*f(i); 
end

I = (h/2)*(f(a)+f(b)+i1);
fprintf("The evaluated integral of the function, %f",I);

%input=1
% Please enter the function =((1+2*(tan(x))^2))^(1/2)
% Enter the lower limit a = 1
% Enter the upper limit b = pi/4
% Enter the number of intervals n = 100
%input=2
% Please enter the function =0.2+25*x-200*(x^2)+675*(x^3)-900*(x^4)+400*(x^5)
% Enter the lower limit a = 1
% Enter the upper limit b = pi/4
% Enter the number of intervals n = 50
