%plot

x1=linspace(-2,2,50);
y1=x1.^2;
x2=linspace(-2,2,50);
y2=x2.^3;

figure(1)

plot(x1,y1,'--r',x2,y2,'ok')
title('Dos graficas')
ylabel('y')
xlabel('t')

figure(2)

plot(x1,y1,'-.g')
title('x^2')
ylabel('y')
xlabel('t')

figure(3)

plot(x2,y2,':m','LineWidth',10)
title('x^3')
ylabel('y')
xlabel('t')
ylim([0 4])
xlim([-2 2])
