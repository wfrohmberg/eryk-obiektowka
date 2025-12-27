#pragma once

#include <map>
#include <string>

#include <problem_instance.h>
#include <algorithm_result.h>

class Algorithm {
protected:
    ProblemInstance const* problemInstance;
public:
    virtual void execute() = 0;
    virtual bool canHandle(ProblemInstance const* instance) const = 0;
    virtual void setProblemInstance(ProblemInstance const* instance);
    virtual AlgorithmResult const* getResult() const = 0;
};

std::map<std::string, Algorithm*>& getAlgorithms();

#define REGISTER_ALGORITHM(NAME, TYPE) \
    struct TYPE##Registrator { \
        TYPE##Registrator() { \
            getAlgorithms()[NAME] = new TYPE(); \
        } \
    }; \
    static TYPE##Registrator global_##TYPE##Registrator

