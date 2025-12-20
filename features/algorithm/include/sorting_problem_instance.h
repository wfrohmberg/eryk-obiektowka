#pragma once

#include <problem_instance.h>

class SortingProblemInstance: public ProblemInstance {
public:
    virtual bool isGreater(int index1, int index2) const = 0;
    virtual void swap(int index1, int index2) = 0;
    virtual int size() const = 0;
    virtual SortingProblemInstance* clone() const = 0;
};