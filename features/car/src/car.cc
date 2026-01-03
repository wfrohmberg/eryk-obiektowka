#include <car.h>

Car::Car(const std::string& regNum, int pw, double wt, EngineType engType)
    : engineType(engType) {
    setRegistrationNumber(regNum);
    setPower(pw);
    setWeight(wt);
}

void Car::setRegistrationNumber(const std::string& regNum) {
    if (regNum.size() != 4) {
        throw CarException("Registration number must be exactly 4 characters long.");
    }
    for (char c : regNum) {
        if (!isalnum(c)) {
            throw CarException("Registration number must be alphanumeric.");
        }
    }
    this->registrationNumber = regNum;
}

std::string Car::getRegistrationNumber() const {
    return registrationNumber;
}

void Car::setPower(int pw) {
    if (pw <= 0) {
        throw CarException("Power must be a positive integer.");
    }
    this->power = pw;
}

int Car::getPower() const {
    return power;
}

void Car::setWeight(double wt) {
    if (wt <= 0) {
        throw CarException("Weight must be a positive number.");
    }
    this->weight = wt;
}

double Car::getWeight() const {
    return weight;
}

void Car::setEngineType(EngineType engType) {
    this->engineType = engType;
}

EngineType Car::getEngineType() const {
    return engineType;
}

