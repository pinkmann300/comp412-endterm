#include <iostream>
#include <vector>
#include "Car.h"

void displayRace(const std::vector<Car>& cars) {
    const int raceDuration = 30;

    for (int step = 0; step < raceDuration; ++step) {

        std::cout << "Race Step: " << step + 1 << std::endl << std::endl;

        for (Car car: cars){
            car.Pedal(); 
            car.Brake(2);

            std::cout << "Car Name: " << car.GetCarName() << std::endl;
            std::cout << "Car Speed: " << car.GetCurrentSpeed() << " mph" << std::endl;
            std::cout << std::endl;
        }

        std::cout << "-----------------------" << std::endl;

        std::cout << "Press Enter to continue to the next step...";
        std::cin.get();
    }
}

int main() {
  
    std::vector<Car> cars;
    cars.emplace_back(4, "BMW", "Car1");
    cars.emplace_back(4, "Ford", "Car2");
    cars.emplace_back(4, "Chevrolet", "Car3");
    cars.emplace_back(4, "Tesla", "Car4");

 
    displayRace(cars);

    return 0;

}



