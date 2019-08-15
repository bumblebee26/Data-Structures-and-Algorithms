close all;
clear;
clc;

%% Reading the data %%
data = load('housing-price-dataset.txt');   %% Housing-price dataset
x = data(:, 1);                             %% Area in square-feet
y = (data(:, 3))/1000;                      %% Price in $1000
m = length(y);


%% Setting initial values %%
learning_rate = 0.0000001;
initial_m = 1;           %<--- Change the initial slope 
initial_b = 1;           %<--- Change the initial y-intercept
num_iterations = 100;    %<--- Change the no. of iterations
error=compute_error_for_line_given_points(initial_b, initial_m, [x,y]);
fprintf('Starting gradient descent at b = %0.2f, m = %0.2f, error = %0.12f',initial_b,initial_m,error);

%% Ploting the data %% 
fprintf('\nPlotting Data ...\n');
plotData(x, y, 1);
hold on;
plot(x, x*initial_m+initial_b, '-');
legend('Training data');
hold off;
fprintf('Program paused. Press enter to continue.\n');


%% Running the gradient descent algorithm %%
fprintf('\nRunning...\n');
[b, m] = gradient_descent_runner([x,y], initial_b, initial_m, learning_rate, num_iterations);

plotData(x, y, 3);
hold on;
plot(x, x*m+b, '-');
legend('Training data');
hold off;
fprintf('\nAfter %0.2f iterations b = %0.12f, m = %0.12f, error = %0.12f\n',num_iterations, b, m, compute_error_for_line_given_points(b, m, [x,y]));

%% Predictions %%
area=input('\nEnter the size in sq-ft:');
price=m*area+b;
fprintf(['Predicted price of a %0.1f sq-ft house is $%0.3f\n'],area,price*1000);