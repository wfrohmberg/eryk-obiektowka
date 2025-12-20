#include <iostream>
#include <algorytm.h>

void Algorytm::wykonaj() {
    iloscWywolan++;
    std::cout << "Algorytm bazowy wykonany." << std::endl;
}

int Algorytm::pobierzIloscWywolan() const {
    return iloscWywolan;
}