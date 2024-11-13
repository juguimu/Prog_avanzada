classdef ProgAM < handle

    properties
        estudiantes,notas
    end

    methods
        function obj=ProgAM(est,n)
            obj.estudiantes=est;
            obj.notas=[n (n(:,2)+n(:,1))/2];            
        end    
        function imprimir(obj)
            fprintf('|%20s|%10s|%10s|%10s|\n','Nombres','Nota 1','Nota 2','Nota Final')
            filas_columnas=size(obj.notas);
            for i=1:filas_columnas(1)
                 fprintf('|%20s|%10.1f|%10.1f|%10.1f|\n',obj.estudiantes{i},obj.notas(i,1),obj.notas(i,2),obj.notas(i,3));
            end    
        end    

        function obj=setEstudiantes(obj,est,n)
            lstr=length(est);

            for i=1:lstr
                obj.estudiantes{end+1}=est{i};
            end    
            obj.notas=[obj.notas; [n (n(:,2)+n(:,1))/2]];
            %obj.nota_2=[obj.nota_2 n2];
            %obj.notaFinal=[obj.notaFinal (n1+n2)./2];        
        end    

        function delEst(obj,est)
            for i=1:length(obj.estudiantes)
                if(strcmp(obj.estudiantes{i},est))%ojo! hay que organizar
                    obj.estudiantes(i)=[];
                    obj.notas(i,:)=[];
                    break
                end
            end    
                    
        end    

    end    


end    