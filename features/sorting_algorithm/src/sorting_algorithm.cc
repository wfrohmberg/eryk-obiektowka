#include <sorting_algorithm.h>

void SortingAlgorithm::setProblemInstance(ProblemInstance const* instance) {
    auto sortingProblemInstance = dynamic_cast<SortingProblemInstance const*>(instance);
    if (sortingProblemInstance) {
        this->sortingProblemInstance = sortingProblemInstance->clone();
    }
}

SortingProblemInstance const* SortingAlgorithm::getResult() const {
    return this->sortingProblemInstance;
}

bool SortingAlgorithm::canHandle(ProblemInstance const* instance) const {
    return dynamic_cast<SortingProblemInstance const*>(instance) != nullptr;
}