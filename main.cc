#include <iostream>
#include <map>
#include <string>

#include <algorytm.h>
#include <algorytm_zlozony.h>
#include <algorithm.h>

int main() {
    std::map<std::string, Algorytm*> algorytmy;
    algorytmy["bazowy"] = new Algorytm();
    algorytmy["zlozony"] = new AlgorytmZlozony();


    std::string wybranyAlgorytm;
    std::cout << "Wybierz algorytm (bazowy/zlozony): ";
    std::cin >> wybranyAlgorytm;
    Algorytm* wskAlgorytm = algorytmy[wybranyAlgorytm];
    wskAlgorytm->wykonaj();
    

    return 0;
}