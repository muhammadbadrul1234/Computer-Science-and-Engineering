%Simpson's 1/3 Rule
clc;
clear all;
close all;

a = input('Enter Function with right side zero: ','s');
y = inline(a);
a = input('Lower Limit: ');
b = input('Upper Limit: ');
n = input('Number of Iteration: ');
h = (b-a)/n;
iEven = 0;
iOdd = 0;

%2012020216
for i = a+h:2*h:b-h
  iOdd = iOdd+y(i);
end
for i = a+2*h:2*h:b-2*h
  iEven = iEven+y(i);
end

area = (h/3)*((y(a)+y(b))+4*iOdd+2*iEven);
fprintf('Integrated value = %f',area);

%input=1
% Please enter the function =x^1/2
% Enter the lower limit a = 1
% Enter the upper limit b = 8
% Enter the number of intervals n = 50
%input=2
% Please enter the function =e^x
% Enter the lower limit a = 0
% Enter the upper limit b = 1
% Enter the number of intervals n = 29