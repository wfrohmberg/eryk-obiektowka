#include <iostream>

#include <car_catalog_exception.h>
#include <car_catalog.h>

void CarCatalog::showCarRegistrationNumbersAndPowers() const {
    for (int i = 0; i < size; ++i) {
        std::cout << car[i]->getRegistrationNumber() << " " << car[i]->getPower() << " ";
    }
}

void CarCatalog::addCar(const Car& newCar) {
    if (size >= CATALOG_SIZE) {
        throw CarCatalogException("Car catalog is full.");
    }
    car[size++] = new Car(newCar);
}

void CarCatalog::removeCarByIndex(int index) {
    if (index < 0 || index >= size) {
        throw CarCatalogException("Index out of bounds.");
    }
    delete car[index];
    car[index] = car[size - 1];
    --size;
}
