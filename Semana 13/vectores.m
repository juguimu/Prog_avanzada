%%Imprimir en pantalla fprintf

fprintf('Hola Mundo \n')

%Ingresar múltiples datos

fprintf('Hola %d Mundo %f\n',32,23.5)

%%definir un vector

Edades=[22,23,34,55,36];

%Para tomar un dato del vector se usa el subíndice

disp(Edades(1));% corresponde a 22 años

%Seleccionar un rango de datos del vector usando :

disp(Edades(2:4));

%Cambiar el valor de una posición

Edades(1)=45;

%Crear un vector

Vector=0:4; %paso de 1
Vector=0:0.5:4;%paso de 0.5


%Longitud de un arreglo

disp(length(Vector));




