%                 Applied Robotics - FRTF20
%                 Hand-in - Problem 1 - Humanoid Robot
%                 Hicham Mohamad (hi8826mo-s)
%                   hsmo@kth.se

clear 
close all
clc

L1arm = 0.275; L2arm = 0.25; 
L1leg = 0.45; L2leg = 0.475;

%% 1) Find the DH parameters for the limbs(arm)
% construct a revolute joint+link using standard DH
%L(1) = link('revolute', 'd', 0, 'a', 135, 'alpha', -pi/2, 'qlim', [-pi pi]);
Larm(1) = Revolute('d', 0, 'a', 0, 'alpha', -pi/2, 'qlim', [-pi pi]);
Larm(2) = Revolute('d', 0, 'a', 0, 'alpha', -pi/2, 'qlim', [-pi pi],...
                                                'offset',-pi/2);
Larm(3) = Revolute('d', 0, 'a', L1arm, 'alpha', 0, 'qlim', [-pi pi]);
Larm(4) = Revolute('d', 0, 'a', L2arm, 'alpha', 0, 'qlim', [-pi pi]);
Larm(5) = Revolute('d', 0, 'a', 0, 'alpha', pi/2, 'qlim', [-pi pi]);
Larm(6) = Revolute('d', 0, 'a', 0, 'alpha', -pi/2, 'qlim', [-pi pi],...
                                                'offset', -pi/2);
Larm(7) = Revolute('d', 0, 'a', 0, 'alpha', 0, 'qlim', [-pi pi]);

%% Investigate the properties of the link object
% The Link object we created has a number of properties
%Larm(1).a, L(1).d
% and we determine that it is a revolute joint
%Larm(1).isrevolute
% For a given joint angle, say q=0.2 rad, we can determine the 
% link transform matrix
%Larm(1).A(0.2)

%% 2) Geometric model of one arm (serial link robot manipulator)
% Now we need to join these into a serial-link robot manipulator
bot_arm = SerialLink([Larm(1) Larm(2) Larm(3) Larm(4) Larm(5) Larm(6) Larm(7)],...
                     'name', 'robotarm')
bot_arm2 = SerialLink([Larm(1) Larm(2) Larm(3) Larm(4) Larm(5) Larm(6) Larm(7)],...
                     'name', 'arm2')                 
% The displayed robot object shows a lot of details.  
% It also has a number of properties such as the number of joints
%bot_arm.n
%% 22) Simulate an arbitrary joint-interpolated motion
% Simulate an arbitrary joint-interpolated motion (path-generation/simulation)
% between two arbitrary configurations
[Q,QD,QDD] = jtraj(deg2rad([0, -10, 0, 0, 10, -20, 30]),...
                   deg2rad([0, 0, 0, 0, -40, 60, -50]), 100);
figure(1)
bot_arm.plot(Q)
%bot_arm.teach(Q)

% Given the joint angles q1 = 0.1 and q2 = 0.2 we can determine 
% the pose of the robot's end-effector, which is referred to as the forward 
% kinematics of the robot.  This, and the inverse kinematics are covered 
% in separate demos.

%bot.fkine([0.1 0.2 0 0 0 0])
%bot.fkine(Q)
% Finally we can draw a stick figure of our robot
%bot.plot([0.1 0.2 0 0 0 0])
%bot_arm.plot(Q)
%bot_arm.teach(Q)

%% 4) Find the DH parameters for the limbs(leg)
% construct a revolute joint+link using standard DH
%L(1) = link('revolute', 'd', 0, 'a', 135, 'alpha', -pi/2, 'qlim', [-pi pi]);
Lleg(1) = Revolute('d', 0, 'a', 0, 'alpha', -pi/2, 'qlim', [-pi pi]);
Lleg(2) = Revolute('d', 0, 'a', 0, 'alpha', -pi/2, 'qlim', [-pi pi],...
                                                   'offset',-pi/2);
Lleg(3) = Revolute('d', 0, 'a', L1leg, 'alpha', 0, 'qlim', [-pi pi]);
Lleg(4) = Revolute('d', 0, 'a', L2leg, 'alpha', 0, 'qlim', [-pi pi]);
Lleg(5) = Revolute('d', 0, 'a', 0, 'alpha', pi/2, 'qlim', [-pi pi]);
Lleg(6) = Revolute('d', 0, 'a', 0, 'alpha', -pi/2, 'qlim', [-pi pi],...
                                                   'offset', -pi/2);
Lleg(7) = Revolute('d', 0, 'a', 0, 'alpha', 0, 'qlim', [-pi pi]);

%% Geometric model of one leg (serial link robot manipulator)
% Now we need to join these into a serial-link robot manipulator
bot_leg = SerialLink([Lleg(1) Lleg(2) Lleg(3) Lleg(4) Lleg(5) Lleg(6) Lleg(7)],...
                     'name', 'robotleg');
bot_leg2 = SerialLink([Lleg(1) Lleg(2) Lleg(3) Lleg(4) Lleg(5) Lleg(6) Lleg(7)],...
                     'name', 'leg2');
                 
% The displayed robot object shows a lot of details.  
% It also has a number of properties such as the number of joints
bot_leg.n

%% 4) Assemble two legs and two arms 
%     so that the result corresponds to the designed robot in the case
%     in which the robot’s trunk joints are blocked.
trunk = 0.12;
busto = 0.3 + 0.25;

% Position of the second arm shifted to the right from arm 1
bot_arm2.base = transl(trunk, 0, 0);
% Position of the first leg shifted down from arm 1
bot_leg.base = transl(0, 0, busto);
% Position of the second leg shifted down and to the right from arm 1
bot_leg2.base = transl(trunk, 0, busto);

%% Plot the assembling ot the four limbs
figure(2)
bot_arm.plot(Q)
axis([-1 1 -1 1 -1 2])
title('Four limbs of the robot')
hold on;
bot_arm2.plot(Q)
hold on
bot_leg.plot(Q)
hold on
bot_leg2.plot(Q)
hold off
