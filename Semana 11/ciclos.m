%% Imprimir el iterador de un ciclo
clc
for n=0:3:10 %inicializar el iterador:paso:hasta donde
    disp(['El iterador va en: ',num2str(n)]);
end    
%%
% Iterar un vector
clc
for vec=[1 2 3 4 5]
    disp(['El valor del vector: ',num2str(vec)]);
end    

%% ciclo while
clc
n=0;


while(n<10)
  disp(['El valor del n: ',num2str(n)])
  if n==5
      break
  end    
  n=n+1;

end    

