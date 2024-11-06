%Funciones

%function a=Nombre_funcion(argumentos)

%end

%%otro archivo

%Función que retorna dos valores

[a,b]=doblar_num(2,3);

function [a,b]=doblar_num(x,y)
    a=x*2;
    b=y*2;
end

%Función que no retorna valores
function div_2(num)
    disp(['la división es: ',num2str(num/2)]);
end

