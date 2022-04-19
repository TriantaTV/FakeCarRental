#ifndef RENTAL_H
#define RENTAL_H

bool GetCustomerDecision();

class CarRentalPlace {
private:
    int numberCars;
    int numberCarsRented;
public:
    CarRentalPlace(void);
    int GetCars(void);
    void SetCars(const int carAmount);
    int GetCarsRented(void);
    void AddCars(const int carAmount);
    void RentCars(const int carAmount);
    void ReturnCars(const int carAmount);
};

#endif
