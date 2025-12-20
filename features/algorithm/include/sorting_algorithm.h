#pragma once

#include <algorithm.h>
#include <sorting_problem_instance.h>

class SortingAlgorithm: public Algorithm {
protected:
    SortingProblemInstance* sortingProblemInstance;
public: 
    virtual void setProblemInstance(ProblemInstance const* instance) override;
};