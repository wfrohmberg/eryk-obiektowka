#include <sorting_algorithm.h>

void SortingAlgorithm::setProblemInstance(ProblemInstance const* instance) {
    auto sortingProblemInstance = dynamic_cast<SortingProblemInstance const*>(instance);
    if (sortingProblemInstance) {
        this->sortingProblemInstance = sortingProblemInstance->clone();
    }
}