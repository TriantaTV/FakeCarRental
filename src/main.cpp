#include <iostream>
#include <Windows.h>
#include "rental.h"

int main() {
    CarRentalPlace newBusiness;
    newBusiness.SetCars(20);
    int timesRan = 0;
    while (true) {
        if (timesRan > 5)
            break;
        std::cout << "Number of cars: " << newBusiness.GetCars() << std::endl;
        std::cout << "Number of rented cars: " << newBusiness.GetCarsRented() << std::endl;
        if (GetCustomerDecision()) {
            newBusiness.RentCars(1);
            std::cout << "You have chosen to rent a car." << std::endl;
            std::cout << "Thank you, have a great day!"   << std::endl;
            Sleep(5000);
            system("CLS");
        } else {
            newBusiness.ReturnCars(1);
            std::cout << "You have chosen to return a car." << std::endl;
            std::cout << "Your return has been processed!"  << std::endl;
            std::cout << "Thank you, have a great day!"     << std::endl;
            Sleep(5000);
            system("CLS");
        }
        timesRan += 1;
    }
    system("CLS");
    std::cout << "Number of cars at end of day: ";
    std::cout << newBusiness.GetCars() << '\n';
    std::cout << "Number of cars rented as of today: ";
    std::cout << newBusiness.GetCarsRented() << '\n';

    return 0;
}
