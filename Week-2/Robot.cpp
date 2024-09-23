#include "Robot.h"

// Constructor to initialize the random seed
Robot::Robot() {
    std::srand(static_cast<unsigned>(std::time(0)));  // Initialize random seed
}

// Returns a random ultrasonic sensor measurement (0 to 400 cm)
double Robot::getUltrasonicMeasurement() {
    ultrasonicDistance = static_cast<double>(std::rand() % 401);  // Random value between 0 and 400
    return ultrasonicDistance;
}

// Returns a random beam break sensor state (true or false)
bool Robot::isBeamBroken() {
    beamBreakState = std::rand() % 2;  // Random true (1) or false (0)
    return beamBreakState;
}

// Displays the robot's sensor data
void Robot::displaySensorData() {
    std::cout << "Ultrasonic Sensor: " << getUltrasonicMeasurement() << " cm" << std::endl;
    std::cout << "Beam Break Sensor: " << (isBeamBroken() ? "Broken" : "Not Broken") << std::endl;
}