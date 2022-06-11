%Trapezoidal Rule
x = input("Please enter the function :", "s");
f = inline(x);
a = input("Enter the lower limit a = ");
b = input("Enter the upper limit b = ");
n = input("Enter the number of intervals n = ");
%2012020216
h = (b-a)/n;
i1 = 0.0;

for i=a+h:h:b-h
    i1 = i1 + 2*f(i); 
end
I = (h/2)*(f(a)+f(b)+3*i1);

fprintf("The evaluated integral of the function, %f",I);