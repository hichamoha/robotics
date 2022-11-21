%% Model of pendulum
clear
close all
clc

% Linear model

g = 9.82; 
l = 0.3; 


A = [0 1 0 0;
    0 0 0 0;
    0 0 0 1;
    0 0 -g/l 0];

B = [0 1 0 1/l]';

C = eye(4);
D = 0; 

sys = ss(A,B,C,D);

Q = [0.1 0 0 0;
    0 0.5 0 0;
    0 0 10 0;
    0 0 0 5];
    
R = 1; 




ctrl = lqr(A,B,Q,R); 
pendulum = feedback(sys,ctrl);
pole(pendulum)
% step(pendulum)

%Drop system from initial condition theta = theta_0
theta_0 = pi/2; 

%Cart reference position
ref = pi/2;


LinSimOut = sim('linearpendulum', 'ReturnWorkspaceOutputs', 'on');
subplot(2,1,1)
plot(LinSimOut.linearsim.Time,LinSimOut.linearsim.Data)
title('Linearized pendulum [$p_0$,$\dot{p_0}$,$\theta_{0}$,$\dot{\theta_{0}}$]$^{T}$ = [0,0,$\frac{\pi}{2}$,0]$^T$','Interpreter','latex')
legend('$p$','$\dot{p}$','$\theta$','$\dot{\theta}$','Interpreter','latex')

subplot(2,1,2)
plot(LinSimOut.tout,LinSimOut.actuation.data)
legend('Control signal')

%% Non-linear dynamics

g = 9.82; 
l = 0.3; 

%Drop system from initial condition theta = theta_0
theta_0 = pi/2; 

%Cart reference position
ref = 0;%pi/2;

SimOut = sim('nonlinearpendulum', 'ReturnWorkspaceOutputs', 'on');
figure
subplot(2,1,1)
plot(SimOut.tout,SimOut.simout.data)
title('Nonlinear pendulum [$p_0$,$\dot{p_0}$,$\theta_{0}$,$\dot{\theta_{0}}$]$^{T}$ = [0,0,$\frac{\pi}{2}$,0]$^T$','Interpreter','latex')
legend('$p$','$\dot{p}$','$\theta$','$\dot{\theta}$','Interpreter','latex')

subplot(2,1,2)
plot(SimOut.tout,SimOut.actuation.data)
legend('Control signal')

