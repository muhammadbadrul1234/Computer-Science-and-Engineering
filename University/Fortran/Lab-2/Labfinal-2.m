%Simpson's 1/3 Rule
clc;
clear all;
close all;

a = input('Enter Function with right side zero: ','s');
f = inline(a);
b = input('Upper Limit: ');
a = input('Lower Limit: ');
n = input('Number of Iteration: ');
h = (b-a)/n;
iEven = 0;
iOdd = 0;

% 022LB
% 200UA
%6121RD

for i = a+h:2*h:b-h
  iOdd = iOdd+f(i);
end

for i = a+2*h:2*h:b-2*h
  iEven = iEven+f(i);
end

area = (h/3)*(f(a)+(4*iEven)+(2*iOdd)+f(b));
fprintf('Integrated value = %f',area);

%input=1
% Please enter the function =x.^1/2
% Enter the lower limit a = 0
% Enter the upper limit b = 8
% Enter the number of intervals n = 50

%input=2
% Please enter the function =exp(x)
% Enter the lower limit a = 0
% Enter the upper limit b = 1
% Enter the number of intervals n = 29