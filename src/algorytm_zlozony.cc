#include <iostream>
#include <algorytm_zlozony.h>

void AlgorytmZlozony::wykonaj() {
    this->Algorytm::iloscWywolan++;
    std::cout << "Algorytm zlozony wykonany." << std::endl;
}