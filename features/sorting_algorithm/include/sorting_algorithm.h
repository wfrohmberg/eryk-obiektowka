#pragma once

#include <algorithm.h>
#include <sorting_problem_instance.h>

class SortingAlgorithm: public Algorithm {
protected:
    SortingProblemInstance* sortingProblemInstance;
public: 
    virtual bool canHandle(ProblemInstance const* instance) const override;
    virtual void setProblemInstance(ProblemInstance const* instance) override;
    virtual SortingProblemInstance const* getResult() const override;
};