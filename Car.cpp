#include "Car.h"
#include <iostream>

// Constructor implementation
Car::Car(int wheels, const std::string& make, const std::string& model)
    : Vehicle(wheels), carMake(make), carModel(model) {}

// Accelerate
void Car::Accelerate(int speedIncrease) {
    currentSpeed += speedIncrease;
    std::cout << "Accelerating to " << currentSpeed << " mph." << std::endl;
}

// Parametrized Brake
void Car::Brake(int speedDecrease) {
    if (currentSpeed - speedDecrease < 0) {
        currentSpeed = 0;
    } else {
        currentSpeed -= speedDecrease;
    }
    std::cout << "Braking to " << currentSpeed << " mph." << std::endl;
}

// Parametrized Shift
void Car::ShiftGear(int gear) {
    currentGear = gear;
    std::cout << "Shifting to Gear " << currentGear << std::endl;
}

// Pedal function for Press on 'p'
void Car::Pedal() {
    Accelerate(10); 
}


void Car::BrakeVeh() {
    Brake(10);
}

int Car::GetCurrentSpeed()
{
    return currentSpeed;
}

std::string Car::GetCarName()
{
    return carModel;
}