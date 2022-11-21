l = 0.3; %Length to center of gravity ????
g = 9.82; %Gravity

A = [0 1 0 0; 0 0 0 0; 0 0 0 1; 0 0 -g/l 1];
B = [0; 1; 0; 1/l];


C = [ 1 0 0 0; 0 0 1 0];

D=[0;0];