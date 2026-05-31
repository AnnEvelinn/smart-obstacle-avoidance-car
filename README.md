# Smart Obstacle Avoidance Car

## Overview

This project is an Arduino-based Smart Obstacle Avoidance Car designed to navigate autonomously by detecting and avoiding obstacles in its path. The system uses an HC-SR04 ultrasonic sensor mounted on an SG90 servo motor to scan the surroundings and determine the safest direction for movement. Based on the measured distances, the Arduino controls the motors through an L298N motor driver to avoid collisions and continue navigation.

## Features

* Autonomous obstacle detection and avoidance
* Real-time distance measurement using ultrasonic sensing
* Servo-based environmental scanning
* Motor control using L298N motor driver
* Automatic path selection based on obstacle distance
* Embedded decision-making logic for navigation

## Technologies Used

* Arduino Uno
* C++
* HC-SR04 Ultrasonic Sensor
* SG90 Servo Motor
* L298N Motor Driver
* DC Motors

## Components Used

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* SG90 Servo Motor
* L298N Motor Driver
* 2 DC Motors
* Robot Chassis

## Working Principle

1. The ultrasonic sensor continuously measures the distance to obstacles in front of the vehicle.
2. When an obstacle is detected within a predefined threshold distance, the car stops.
3. The servo motor rotates the ultrasonic sensor to scan different directions.
4. Distance measurements from multiple angles are compared.
5. The Arduino selects the direction with the greatest clearance.
6. The car turns toward the safer path and resumes movement.



## Skills Gained

* Embedded Systems Programming
* Arduino Development
* Sensor Integration and Calibration
* Motor Control and Driver Interfacing
* Robotics Fundamentals
* Hardware Troubleshooting and Testing
* Real-Time Decision Making
* Autonomous Navigation Concepts

## Future Improvements

* Bluetooth or Mobile App Control
* Manual and Autonomous Mode Switching
* Path Memory and Maze Solving
* Camera-Based Object Detection
* IoT-Based Monitoring and Control

## Repository Structure

```text
smart-obstacle-avoidance-car/
│
├── README.md
│
├── code/
│   └── code.ino
│
├── ppt/
│   └── Smart Car With Obstacle Detection.pdf
│
└── images/
    ├── car-on.jpeg
    ├── car-side-view.jpeg
    └── car-top-view.jpeg
```


