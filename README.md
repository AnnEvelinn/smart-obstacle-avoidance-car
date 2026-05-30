# Smart Obstacle Avoidance Car

## Overview

This project is an Arduino-based smart car designed to detect and avoid obstacles autonomously. It uses an ultrasonic sensor mounted on a servo motor to scan the environment and determine a safe path for movement.

## Features

- Obstacle detection using HC-SR04 ultrasonic sensor
- Autonomous obstacle avoidance
- Servo-based environmental scanning
- Motor control using L298N motor driver
- Real-time decision making

## Technologies Used

- Arduino Uno
- C/C++
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- L298N Motor Driver
- DC Motors

## Working

1. The ultrasonic sensor continuously measures distance.
2. When an obstacle is detected, the car stops.
3. The servo rotates the sensor to scan left and right.
4. The Arduino compares available distances.
5. The car turns toward the clearer path and continues moving.

## Skills Gained

- Embedded systems programming
- Sensor integration
- Motor control
- Robotics fundamentals
- Hardware debugging

## Future Improvements

- Bluetooth/mobile app control
- Autonomous and manual mode switching
- Path memory and maze solving
- Camera-based obstacle detection


