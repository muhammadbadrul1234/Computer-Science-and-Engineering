%Simpson's 1/3 Rule
clc;
clear all;
close all;

a = input('Enter Function: ','s');
y = inline(a);

a = input('Lower limit: ');
b = input('Upper limit: ');
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
  i1=i1+y(i);
end

for i=a+2*h:3*h:b-h
  i2=i2+y(i);
end

for i=a+3*h:3*h:b-3*h
  i3=i3+y(i);
end

area = (3*h/8)*((y(a)+y(b))+3*i1+3*i2+2*i3);

fprintf('Integrated value = %f',area);

%input=1
% Please enter the function =(1+cos(x))^1/2
% Enter the lower limit a = 0
% Enter the upper limit b = pi/4
% Enter the number of intervals n = 15

%input=2
% Please enter the function =(1/(x^2+2))
% Enter the lower limit a = 1
% Enter the upper limit b = 2
% Enter the number of intervals n = 12