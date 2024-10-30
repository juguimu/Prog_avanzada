classdef Numero < handle
    properties
        Num1,Num2
    end    
    
    methods
        %constructor
        function obj=Numero(x,y)
            obj.Num1=x;
            obj.Num2=y;
        end    
        %Métodos actualizar atributos
        function obj=setNum1_Num2(obj,x,y)
            obj.Num1=x;
            obj.Num2=y;
        end

        %Métdos de operaciones
        function suma(obj)
            disp(['La suma es: ',num2str(obj.Num2+obj.Num1)]);
        end
        function resta(obj)
            disp(['La resta es: ',num2str(obj.Num2-obj.Num1)]);
        end
        function Mult(obj)
            disp(['La multiplicación es: ',num2str(obj.Num2*obj.Num1)]);
        end
        function Division(obj)
            if (obj.Num1~=0)
                disp(['La división es: ',num2str(obj.Num2/obj.Num1)]);
            else
                disp('no es posible la división por cero!')
            end
        end    
    end
end
