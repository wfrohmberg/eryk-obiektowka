#pragma once

#include <string>

class CarException {
private:
    std::string message;
public:
    CarException(const std::string& msg) : message(msg) {}

    virtual std::string getMessage() const {
        return message;
    }
};