function [new_b, new_m] = step_gradient(b_current, m_current, points, learningRate)
b_gradient = 0;
m_gradient = 0;
N = length(points);
for i=1:length(points)
    x = points(i,1);
    y = points(i,2);
    b_gradient = b_gradient + -(2/N) * (y - ((m_current * x) + b_current));
    m_gradient = m_gradient + -(2/N) * x * (y - ((m_current * x) + b_current));
    new_b = b_current - (learningRate * b_gradient);
    new_m = m_current - (learningRate * m_gradient);
end