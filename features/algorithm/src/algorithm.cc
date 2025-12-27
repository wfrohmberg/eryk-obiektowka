#include <algorithm.h>

void Algorithm::setProblemInstance(ProblemInstance const* instance) {
    this->problemInstance = instance;
}

std::map<std::string, Algorithm*>& getAlgorithms() {
    static std::map<std::string, Algorithm*> algorithms;
    return algorithms;
}