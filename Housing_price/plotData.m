function plotData(x, y, i)
figure(i); 
plot(x, y, 'rx', 'MarkerSize', 10); 
ylabel('Housing Price in $1000'); 
xlabel('Area in Sq-Ft');
if i==1
    title('Before Optimization.');
elseif i==3
    title('After Optimization.');
elseif i==2
    title('Intermediate steps.');
end