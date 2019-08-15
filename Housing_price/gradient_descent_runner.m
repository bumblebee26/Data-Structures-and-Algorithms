function [b,m] = gradient_descent_runner(points, starting_b, starting_m, learning_rate, num_iterations)
b = starting_b;
m = starting_m;
x = points(:, 1); y = points(:, 2);
plotData(x, y, 2);
hold on;
for i=1:num_iterations
    [b, m]= step_gradient(b, m, points, learning_rate);
    plot(x, x*m+b, '-');
    legend('Training data');
end
hold off;