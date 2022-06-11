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