%%Programa que usa la clase Numero
clc
obj=Numero(4,5);

while(true)
    
    disp('Programa de la clase Numero')
    disp('1 para suma')
    disp('2 para resta')
    disp('3 para multiplicacion')
    disp('4 para division')
    disp('5 para salir')
    n=input('Ingrese la opción: ');
    
    switch n
        case 1
            obj.suma();
        case 2
            obj.resta();
        case 3
            obj.Mult();
        case 4
            obj.Division();
        case 5
            clc
            break;
        otherwise
            disp('Opción invalida')
    end    
    pause
    clc

end    