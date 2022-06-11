%Trapezoidal Rule
clc;
clear all;
close all;

x = input("Please enter the function :", "s");
f = inline(x);
b = input("Enter the upper limit b = ");
a = input("Enter the lower limit a = ");
n = input("Enter the number of iterations n = ");
h = (b-a)/n;
ii = 0;

% 022LB
% 200UA
%6121RD

for i=a+h:h:b-h
    ii = ii + 2*f(i); 
end

yi = (h/2)*(f(a)+f(b)+ii);
fprintf("The evaluated integral of the function, %f",yi);

%input=1
% Please enter the function =((1+2*(tan(x))^2))^(1/2)
% Enter the upper limit b = pi/4
% Enter the lower limit a = 1
% Enter the number of intervals n = 100
%input=2
% Please enter the function =0.2+25*x-200*(x.^2)+675*(x.^3)-900*(x.^4)+400*(x.^5)
% Enter the upper limit b = pi/4
% Enter the lower limit a = 1
% Enter the number of intervals n = 50
