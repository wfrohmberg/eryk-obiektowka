#pragma once

#include <string>
#include <engine_type.h>
#include <car_exception.h>


class Car {
private:
    std::string registrationNumber;
    int power;
    double weight;
    EngineType engineType;
public: 
    Car(const std::string& regNum, int pw, double wt, EngineType engType);
    void setRegistrationNumber(const std::string& regNum);
    std::string getRegistrationNumber() const;

    void setPower(int pw);
    int getPower() const;

    void setWeight(double wt);
    double getWeight() const;

    void setEngineType(EngineType engType);
    EngineType getEngineType() const;
};