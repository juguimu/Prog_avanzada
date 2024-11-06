%%determina si un número es par y mayor que 2
clc
n=input('Introducir el número: \n');
clc

if mod(n,2)==0
    disp(['el número ',num2str(n),' es par']);
else
    disp(['el número ',num2str(n),' no es par']);
end    

if n>2
    disp([num2str(n),' es mayor que 2']);
else  
    disp([num2str(n),' no es mayor que 2']);
end    


