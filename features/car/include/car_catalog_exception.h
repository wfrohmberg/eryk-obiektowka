#pragma once

#include <car_exception.h>

class CarCatalogException : public CarException {
public:
    CarCatalogException(const std::string& msg) : CarException(msg) {}
};