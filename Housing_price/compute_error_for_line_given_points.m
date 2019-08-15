function mse = compute_error_for_line_given_points(b,m,points)
totalError=0;
for i=1:length(points)
    x = points(i,1);
    y = points(i,2);
    totalError =totalError + (y - (m * x + b))^2;
end
mse=totalError/length(points);
end