function plotData(x, y, i)
figure(i); 
plot(x, y, 'rx', 'MarkerSize', 10); 
ylabel('y axis'); 
xlabel('x axis');
if i==1
    title('For initial slope and y-intercept.');
elseif i==3
    title('For optimized slope and y-intercept.');
elseif i==2
    title('Intermediate steps.');
end