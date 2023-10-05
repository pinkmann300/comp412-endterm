#ifndef CAR_H
#define CAR_H


#include <string>
#include "Vehicle.h"

class Car : public Vehicle {
public:
    // Constructor
    Car(int wheels, const std::string& make, const std::string& model);

    // Member functions
    void Accelerate(int speedIncrease);
    void Brake(int speedDecrease);
    void ShiftGear(int gear);
    void Pedal();
    void BrakeVeh();
    int GetCurrentSpeed();
    std::string GetCarName();

private:
    std::string carMake;
    std::string carModel;
};

#endif
