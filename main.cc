#include <iostream>
#include <algorithm.h>
#include <vector_sorting_problem_instance.h>

//[fdjkl;sajkf;dlaj;klafd]  
//^

int main() {
    auto& algorithms = getAlgorithms();
    std::cout << "Available algorithms:" << std::endl;
    for (const auto& alg : algorithms) {
        std::cout << "- " << alg.first << std::endl; 
    }

    std::cout << "Choose your algorithm>" << std::endl;
    std::string choice;
    std::cin >> choice;

    VectorSortingProblemInstance<int> instance({5, 3, 8, 1, 2});
    if (algorithms.find(choice) != algorithms.end()) {
        if (!algorithms[choice]->canHandle(&instance)) {
            std::cout << "The selected algorithm cannot handle the provided problem instance." << std::endl;
            return 1;
        }
        algorithms[choice]->setProblemInstance(&instance);
        algorithms[choice]->execute();
        auto result = dynamic_cast<const VectorSortingProblemInstance<int>*>(algorithms[choice]->getResult());
        if (!result) {
            std::cout << "Failed to retrieve sorted result." << std::endl;
            return 1;
        }
        result->forEach([](int value) {
            std::cout << value << " ";
        });
        std::cout << std::endl;
    } else {
        std::cout << "Algorithm not found!" << std::endl;
    }

    return 0;
}