# Arduino High-Five Robotic Hand
An interactive Arduino-based robotic project that detects a hand using an ultrasonic distance sensor and automatically triggers a "high-five" gesture using a servo motor.

🚀 Features
Proximity Detection: Uses an HC-SR04 ultrasonic sensor (trigPin / echoPin) to measure the distance of an incoming hand in real-time.

Automated Servo Control: Calculates a dynamic angle (theta) based on the measured distance and commands a servo motor to execute the high-five movement.

Serial Monitoring: Provides live feedback and status logs through the Serial Monitor.

🛠️ Hardware Requirements
Arduino board (Uno, Nano, etc.)

Servo motor

Ultrasonic distance sensor (HC-SR04)

Connecting wires and breadboard

💻 Code Overview
The system continuously pings for objects. Once an object is detected within the threshold distance (pragDistanta = 35 cm), it calculates the required rotation angle and activates the robotic hand, returning it to the initial position after the gesture.

Cum îl poți trece în CV-ul Europass (la secțiunea Proiecte / Projects):
Project: Arduino High-Five Robotic Hand

Description:

Developed an interactive Arduino-based robotic system featuring real-time proximity detection via ultrasonic sensors and automated servo motor actuation.

Programmed custom logic in C++ (Arduino IDE) to calculate dynamic angles and execute physical gestures based on distance thresholds.
