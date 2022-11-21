%                      Crane Damping project - Applied Robotics
clear
close all
clc

g = 9.82; 
l = 0.3; 

%% Complete system (Cart-pendulum) - Linear model
A = [0 1 0 0;
     0 0 0 0;
     0 0 0 1;
     0 0 -g/l 0];

B = [0 1 0 1/l]';

%C = eye(4);
%C = [ 1 0 0 0; 0 0 1 0];
C = [ 1 0 0 0; 0 0 0 0; 0 0 1 0; 0 0 0 0];
D = [0;0;0;0]; 

fullsys = ss(A,B,C,D);

Q = [0.1 0 0 0;
    0 0.5 0 0;
    0 0 10 0;
    0 0 0 5];
    
R = 1; 

%{
 lqr  Linear-quadratic regulator design for state-space systems.
 lqr computes the state-feedback control u = -K*x that minimizes
 the cost function: 
       J = Integral {x'Qx + u'Ru + 2*x'Nu} dt     (continuous time)
       J = Sum {x'Qx + u'Ru + 2*x'Nu}             (discrete time)
 
for the state dynamics dx/dt = Ax+Bu or x[n+1] = Ax[n]+Bu[n].
[K,S,CLP] = lqr(SYS,Q,R,N) calculates the optimal gain matrix K for the
    continuous or discrete state-space model SYS. lqr also returns the
    solution S of the associated algebraic Riccati equation and the 
    closed-loop poles CLP = EIG(A-B*K). The matrix N is set to zero when 
    omitted.
 
    [K,S,CLP] = lqr(A,B,Q,R,N) is an equivalent syntax for continuous-time
    models with dynamics dx/dt = Ax+Bu.
%}
%[K,S,CLP] = lqr(A,B,Q,R); 
ctrl = lqr(A,B,Q,R);

%% Feedback 
% M = feedback(M1,M2) computes a closed-loop model M for the feedback loop: 
 
%           u --->O---->[ M1 ]----+---> y
%                 |               |           y = M * u
%                 +-----[ M2 ]<---+

pendulum = feedback(fullsys,ctrl);
%pendulum = feedback(fullsys,ctrl, +1);
pole(pendulum)
% step(pendulum)

%% Simulating and plotting - Linear full system
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

