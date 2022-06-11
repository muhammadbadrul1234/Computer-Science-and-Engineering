%Simpson's 3/8 Rule
clc;
clear all;
close all;

a = input('Enter Function: ','s');
f = inline(a);
b = input('Upper limit: ');
a = input('Lower limit: ');
n = input('Number of iteration: ');

h = (b-a)/n;

i1 = 0;
i2 = 0;
i3 = 0;

% 022LB
% 200UA
%6121RD
2012020216
for i=a+h:3*h:b-2*h
  i1=i1+f(i);
end

for i=a+2*h:3*h:b-h
  i2=i2+f(i);
end

for i=a+3*h:3*h:b-3*h
  i3=i3+f(i);
end

area = (3*h/8)*((f(a)+f(b))+3*i1+3*i2+2*i3);

fprintf('Integrated value = %f',area);

%input=1
% Please enter the function =(1+cos(x))^1/2
% Enter the upper limit b = pi/4
% Enter the lower limit a = 0
% Enter the number of intervals n = 15

%input=2
% Please enter the function =(1/(x^2+2))
% Enter the upper limit b = 2
% Enter the lower limit a = 1
% Enter the number of intervals n = 12