%Ingresar edades de n estudiantes
%Imprimir promedio de edades
%Imprimir la edad mayor
%Imprimir la edad menor
%Termina cuando ingresan el 999

%% Solución

n=0;
edad=0;
while(edad~=999)
    edad=input(['Ingrese la edad del estudiante ',num2str(n+1),'\n']);
    n=n+1;
end    

disp(['Ingresaron ',num2str(n-1),' estudiantes']);