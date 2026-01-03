#pragma once

#include <car.h>

#define CATALOG_SIZE 6

class CarCatalog {
private:
    Car *car[CATALOG_SIZE];
    int size = 0;
public:
    void showCarRegistrationNumbersAndPowers() const;
    void addCar(const Car& newCar);
    void removeCarByIndex(int index);
};