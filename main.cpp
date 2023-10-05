#include <iostream>
#include "Car.h"
#include <stdexcept>

int main()
{
    try
    {
        
        Car *myCarPtr = new Car(4, "BMW", "Car1");

        myCarPtr->Start();
        myCarPtr->Accelerate(10);

        while (myCarPtr->GetCurrentSpeed() > 0)
        {
            
            std::cout << "Enter 'p' to pedal or 'b' to brake: ";
            char choice;
            std::cin >> choice;

            if (choice == 'p')
            {
                myCarPtr->Pedal();
            }
            else if (choice == 'b')
            {
                myCarPtr->BrakeVeh();
            }
            else
            {
                std::cout << "Invalid choice. Please enter 'p' or 'b'." << std::endl;
            }

            myCarPtr->PrintInfo();
        }

        myCarPtr->Stop();

        delete myCarPtr;
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
