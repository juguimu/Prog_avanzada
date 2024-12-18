classdef ProgA < handle

    properties
        estudiantes,nota_1,nota_2,notaFinal
    end

    methods
        function obj=ProgA(est,n1,n2)
            obj.estudiantes=est;
            obj.nota_1=n1;
            obj.nota_2=n2;
            obj.notaFinal=(n1+n2)./2;
        end    
        function imprimir(obj)
            fprintf('|%20s|%10s|%10s|%10s|\n','Nombres','Nota 1','Nota 2','Nota Final')

            for i=1:length(obj.estudiantes)
                 fprintf('|%20s|%10.1f|%10.1f|%10.1f|\n',obj.estudiantes{i},obj.nota_1(i),obj.nota_2(i),obj.notaFinal(i));
            end    
        end    

        function obj=setEstudiantes(obj,est,n1,n2)
            obj.estudiantes{end+1}=est;
            obj.nota_1=[obj.nota_1 n1];
            obj.nota_2=[obj.nota_2 n2];
            obj.notaFinal=[obj.notaFinal (n1+n2)./2];        
        end    

        function delEst(obj,est)
            for i=1:length(obj.estudiantes)
                if(strcmp(obj.estudiantes{i},est))%ojo! hay que organizar
                    obj.estudiantes(1)=[];
                    obj.nota_1(i)=[];
                    obj.nota_2(i)=[];
                    obj.notaFinal(i)=[];
                    break
                end
            end    
                    
        end    

    end    


end    