#include "Vehicle.h"
#include <iostream>

// Constructor implementation
Vehicle::Vehicle(int wheels): numWheels(wheels), currentSpeed(0), currentGear(1) {}

// Start method implementation
void Vehicle::Start() {
    std::cout << "Vehicle is starting." << std::endl;
}

// Stop method implementation
void Vehicle::Stop() {
    currentSpeed = 0;
    currentGear = 1;
    std::cout << "Vehicle is stopping." << std::endl;
}

// PrintInfo method implementation
void Vehicle::PrintInfo() {
    std::cout << "Number of wheels: " << numWheels << std::endl;
    std::cout << "Current speed: " << currentSpeed << " mph" << std::endl;
    std::cout << "Current gear: " << currentGear << std::endl;
}
