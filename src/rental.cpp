#include <iostream>
#include <string>
#include <algorithm>
#include "rental.h"

bool GetCustomerDecision() {
    std::string customerDecision;
    std::cout << "Would you like to return or rent a car?" << std::endl;
    while (true) {
        std::cout << "Enter your choice: ";
        std::cin >> customerDecision;
        std::transform(customerDecision.begin(), customerDecision.end(), customerDecision.begin(), ::tolower);
        if (customerDecision == "rent")
            return 1;
        if (customerDecision == "return")
            return 0;
        std::cout << "Could not '" << customerDecision << "', ";
        std::cout << "please try again." << std::endl;
    }

}

CarRentalPlace::CarRentalPlace(void) {
    numberCars = 0;
    numberCarsRented = 0;
}

int CarRentalPlace::GetCars(void) {
    return numberCars;
}

void CarRentalPlace::SetCars(const int carAmount) {
    numberCars = carAmount;
}

int CarRentalPlace::GetCarsRented(void) {
    return numberCarsRented;
}


void CarRentalPlace::AddCars(const int carAmount) {
    numberCars += carAmount;
}

void CarRentalPlace::RentCars(const int carAmount) {
    numberCars -= carAmount;
    numberCarsRented += carAmount;
}

void CarRentalPlace::ReturnCars(const int carAmount) {
    numberCars += carAmount;
    numberCarsRented -= carAmount;
}
