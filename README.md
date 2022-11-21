# robotics - Crane Damping
## Introduction 
The following conceptual problems must be resolved to make a robot succeed in performing a typical task:
- Forward Kinematics 
- Inverse Kinematics 
- Velocity Kinematics/Jacobians
- Dynamics 
- Path Planning and Trajectory Generation 
- Motion Control 
- Force Control
- Sequence programming (and task description)

## Some Robot Classifications
### Entertainment Robotics
- Wheeled and Walking Robots, such as Asimo from Honda
- Toys such as Aibo from Sony, https://us.aibo.com/
- Boston dynamics https://www.bostondynamics.com/
### Service Robotics
- Trilobite - Robot Vacuum Cleaner from Electrolux
- Husqvarna lawn mower
- The Helpmate - Hospital Robots
### Industrial Robotics
- Serial-Type Robots
- Parallel Kinematic Machines
- Arc and Spot Welding (Number 1 Application)
- Spray Painting, Grinding, Milling, Polishing
### Medical Robotics
- Da Vinci robot by Intuitive Surgical: https://www.youtube.com/watch?v=7sTfD_mStwE



## Project Description
The purpose of this project is to design a controller for damping a crane with a swinging load. The system
consists of the robot **ABB IRB 140** and a free swinging pendulum attached to the robot. The controller
will be implemented and evaluated using MATLAB/Simulink, then the satisfying design will be tried on
the real robot using the ABB controller IRC5 and the LTH-made sensor software interface **ExtCtrl**, based
on the networked architecture running on *Linux/Xenomai* platforms. By using an Inertial Measurement
Unit IMU app called *IMU+GPS-Stream* together with a mobile phone, we extract information from both
the accelerometer and the gyro to estimate and track the angle of the pendulum.

## Literature
- Spong, M.W., Hutchinson, S., and Vidyasagar, M., "Robot Modeling and Control", John Wiley and Sons, 2006
- Lecture notes by Leonid Freidovich (based on Spong et al)
- Peter Corke’s robot toolbox (Matlab)
- Kevin Lynch and Frank Park, "Modern Robotics: Mechanics, Planning, and Control"  


## Software
- RobotStudio (PC-based robot simulation, ABB Robotics) http://new.abb.com/products/robotics/robotstudio/
- Matlab/Simulink: http://petercorke.com/Robotics_Toolbox.html <br>
http://en.wikibooks.org/wiki/Robotics_Kinematics_and_Dynamics
- Peter Corke’s robot-academy: http://petercorke.com/wordpress/resources/robot-academy
