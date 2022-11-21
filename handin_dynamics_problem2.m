%                 Applied Robotics - FRTF20
%                 Hand-in - Robotics Toolbox / dynamics
%                 Hicham Mohamad (hi8826mo-s)
%                 email: hsmo@kth.se

clear 
close all
%clc

%% Problem 2 - Robotics Toolbox / dynamics
 L1 = 352; 
 L2 = 712 - L1; 
 L3 = 380;
 %{
 Use Peter Corke’s toolbox to set up a model of the 3 DOF robot which
corresponds to the first three joints of IRB140, see Fig.3. 
You should in addition to the kinematic parameters also supply enough 
parameters (choose ’realistic masses’, total robot weight is about
100kg) to be able to get a dynamic model representation.
 %}
 
%% a) Find the DH parameters for the 3 DOF robot
% Revolute Robot manipulator Revolute link class
% construct a revolute joint+link using standard DH
%L(1) = link('revolute', 'd', 0, 'a', 135, 'alpha', -pi/2, 'qlim', [-pi pi]);
L(1) = Revolute('d', L1, 'a', 0, 'alpha', -pi/2, 'qlim', [-pi pi], 'm', 33000);
L(2) = Revolute('d', 0, 'a', L2, 'alpha', 0, 'qlim', [-pi pi], 'm', 33000);
L(3) = Revolute('d', 0, 'a', L3, 'alpha', 0, 'qlim', [-pi pi], 'm', 33000);

% dynamic: total robot weight
%L.m = 100000;

%% Geometric model of the 3 DOF robot(serial link robot manipulator)
% Now we need to join these into a serial-link robot manipulator
R = SerialLink([L(1) L(2) L(3)], 'name', '3DOFrobot')


%%  b) Stationary torque
%{
 SerialLink/rne Inverse dynamics
TAU = R.rne(Q, QD, QDD, OPTIONS) is the joint torque required for the
  robot R to achieve the specified joint position Q (1xN), velocity QD
  (1xN) and acceleration QDD (1xN), where N is the number of robot joints.
%}
%TAU = R.rne(Q, QD, QDD, OPTIONS)
Q = [0, 10, 40];
% The torque needed on the motor side to overcome the influence of
% gravity for the configuration (0, 10, 40)
TAU = R.rne(Q, [0,0,0], [0,0,0]);
% you also use graveload()

%% c) Simulate an arbitrary joint-interpolated motion
% Simulate an arbitrary joint-interpolated motion (path-generation/simulation)
% between two arbitrary configurations
[Q,QD,QDD] = jtraj(deg2rad([10, 20, 30]),...
                   deg2rad([-10, 40, 10]), 100);
figure(1)
R.plot(Q)
title('Simulation of 3 joints robot')

%% d) simulation of a “free-falling” robot from its home-position (joint torques=0).
% The Link object we created has a number of properties
% nofriction: Link object with friction parameters set to zero%
% L(1).nofriction()

%{
FORWAR DYNAMICS
Forward dynamics is the computation of joint accelerations given position 
and velocity state, and actuator torques.  
It is useful in simulation of a robot control system. 

Consider a Puma 560 at rest in the zero angle pose, with zero applied joint
torques. The joint acceleration would be given by
mdl_puma560
p560.accel(qz, zeros(1,6), zeros(1,6))

To be useful for simulation this function must be integrated.  fdyn() uses 
the MATLAB function ode45() to integrate the joint acceleration.  
It also allows for a user written function to compute the joint torque as
 a function of  manipulator state.

To simulate the motion of the Puma 560 from rest in the zero angle pose  
with zero applied joint torques
tic
[t q qd] = p560.nofriction().fdyn(10, [], qz);
toc

and the resulting motion can be plotted versus time
subplot(3,1,1); plot(t,q(:,1)); xlabel('Time (s)'); ylabel('Joint 1 (rad)')
subplot(3,1,2); plot(t,q(:,2)); xlabel('Time (s)'); ylabel('Joint 2 (rad)')
subplot(3,1,3); plot(t,q(:,3)); xlabel('Time (s)'); ylabel('Joint 3 (rad)')

Clearly the robot is collapsing under gravity, but it is interesting to  
note that rotational velocity of the upper and lower arm are exerting  
centripetal and Coriolis torques on the waist joint, causing it to rotate.

This can be shown in animation also
clf; p560.plot(q)
%}

clf
% use accel(position, velocity, actuator torques).
Rqdd = R.accel(zeros(1,3), zeros(1,3), zeros(1,3))

%RNF = R.nofriction() is a robot object with the same parameters as R but 
%  with non-linear (Coulomb) friction coefficients set to zero. 
% simulate the motion from rest in the zero angle pose with zero applied joint torques
[t q qd] = R.nofriction.fdyn(10, [], zeros(1,3));
% we can also use fdyn() % then interpolate with interp1() % then plot

figure(2)
title('Free falling robot')
% show the robot collapsing under gravity in animation
R.plot(q)


