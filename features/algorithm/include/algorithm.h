#pragma once

#include <problem_instance.h>

class Algorithm {
protected:
    ProblemInstance const* problemInstance;
public:
    virtual void execute() = 0;
    virtual void setProblemInstance(ProblemInstance const* instance);
};