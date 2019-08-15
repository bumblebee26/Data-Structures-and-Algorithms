close all;
clear;
clc;

%% Reading the data %%
points=csvread('data.csv');


%% Setting initial values %%
learning_rate = 0.0001;
initial_m = 0;          %<--- Change the initial slope 
initial_b = 0;          %<--- Change the initial y-intercept
num_iterations = 1000;    %<--- Change the no. of iterations
error=compute_error_for_line_given_points(initial_b, initial_m, points);
fprintf('Starting gradient descent at b = %0.2f, m = %0.2f, error = %0.12f',initial_b,initial_m,error);


%% Ploting the data %% 
fprintf('\nPlotting Data ...\n')
x = points(:, 1); y = points(:, 2);
plotData(x, y, 1);
hold on;
plot(x, x*initial_m+initial_b, '-');
legend('Training data');
hold off;
fprintf('Program paused. Press enter to continue.\n');
pause;

%% Running the gradient descent algorithm %%
fprintf('\nRunning...\n');
[b, m] = gradient_descent_runner(points, initial_b, initial_m, learning_rate, num_iterations);

plotData(x, y, 3);
hold on;
plot(x, x*m+b, '-');
legend('Training data');
hold off;
fprintf('\nAfter %0.2f iterations b = %0.12f, m = %0.12f, error = %0.12f\n',num_iterations, b, m, compute_error_for_line_given_points(b, m, points));

%% Predictions %%

y=m*21+b
