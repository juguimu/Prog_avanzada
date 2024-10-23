
%Intro Matlab
clc

%%Ejemplo, sumar, restar y multiplicar dos números
a=input('Introducir el número 1: \n');
b=input('Introducir el número 2: \n');
clc
op=input('1-Suma\n2-Resta\n3-Mutiplicación\n:');

clc
if op==1
    disp(['la suma es: ',num2str(a+b)]);
elseif op==2
    disp(['la resta es: ',num2str(a-b)]);
elseif op==3
    disp(['la multiplicación es: ',num2str(a*b)]);
else
    disp('opción no valida!');
end    










%% a='Hola';
% b='Mundo';
% 
% disp([a,' ',b]);
% 
% n=input('Introducir el número: \n');
% 
% disp(['el número es: ',num2str(n)]);