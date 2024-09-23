#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()

class Robot {
private:
    // Ultrasonic sensor measurement (in cm)
    double ultrasonicDistance;

    // Beam break sensor state (true: broken, false: not broken)
    bool beamBreakState;

public:
    // Constructor
    Robot();

    // Get ultrasonic sensor measurement (returns random value between 0 and 400 cm)
    double getUltrasonicMeasurement();

    // Get beam break sensor state (random true/false)
    bool isBeamBroken();

    // Display robot's sensor data
    void displaySensorData();
};

#endif // ROBOT_H