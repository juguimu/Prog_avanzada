%% Definir una clase en matlab

classdef Miclase
    properties
        A,B
    end 
    methods
           
        function suma(obj)
            disp(['la suma es: ',(num2str(obj.A+obj.B))]);
        end 
        function obj = setA(A)
            obj.A=A;
        end  
        function obj = setB(B)
            obj.B=B;
        end  

        function obj = Miclase(X,Y)
            obj.A=X;
            obj.B=Y;
        end 
    end    

end    

%%

%p=Miclase(2,2);


