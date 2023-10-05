#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
public:
    // Constructor for the Vehicle class
    Vehicle(int wheels);

    // Methods
    void Start();
    void Stop();
    void PrintInfo();

protected:
    int numWheels;
    int currentSpeed;
    int currentGear;
};

#endif
