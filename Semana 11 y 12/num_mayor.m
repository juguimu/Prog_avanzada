clc;
n1=input('Introducir el número 1: \n');
n2=input('Introducir el número 2: \n');
n3=input('Introducir el número 3: \n');
clc;

%disp(n1+n2+n3);

if n1>n2
    if n1>n3
        disp([num2str(n1),' es el número mayor']);
    elseif n3>n1
        disp([num2str(n3),' es el número mayor']);
    end    
elseif n2>n1
    if n2>n3
        disp([num2str(n2),' es el número mayor']);
    elseif n3>n2
        disp([num2str(n3),' es el número mayor']);
    end    
elseif n3>n2 && n3>n1
    disp([num2str(n3),' es el número mayor']);
else
    disp('No es posible definir el número mayor');
end    