#include <iostream>

class InstancjaProblemu {

};

class SugestiaSciezki {

};

class Algorytm {
protected:
    InstancjaProblemu* instancja;
    int iloscWywolan = 0;
public: 
    virtual void wykonaj() {
        iloscWywolan++;
        std::cout << "Algorytm bazowy wykonany." << std::endl;
    }

    int pobierzIloscWywolan() const {
        return iloscWywolan;
    }
};

class AlgorytmZlozony : public Algorytm {
    int iloscWywolan = 0;
public:
    void wykonaj() {
        this->Algorytm::iloscWywolan++;
        std::cout << "Algorytm zlozony wykonany." << std::endl;
    }
};

class AlgorytmZSugestiaSciezki {
protected:
    SugestiaSciezki* sugestia;
public:
    virtual void setSugestiaSciezki(SugestiaSciezki* sugestia) {
        this->sugestia = sugestia;
    }
};


class AlgorytmSpecjalny : public Algorytm, public AlgorytmZSugestiaSciezki {
public:
    void wykonaj() override {
        iloscWywolan++;
        std::cout << "Algorytm specjalny wykonany z sugestia sciezki (" << this->sugestia << ")" << std::endl;
    }
};

int main() {
    Algorytm algorytm;
    AlgorytmZlozony algorytmZlozony;
    AlgorytmSpecjalny algorytmSpecjalny;
    algorytm.wykonaj();
    algorytmZlozony.wykonaj();


    SugestiaSciezki sugestia;
    Algorytm* wskAlgorytm = &algorytmSpecjalny;
    if (AlgorytmZSugestiaSciezki* specjalny = dynamic_cast<AlgorytmZSugestiaSciezki*>(wskAlgorytm)) {
        specjalny->setSugestiaSciezki(&sugestia);
    }
    wskAlgorytm->wykonaj();

    
    
    //std::cout << "Ilosc wywolan: " << wskAlgorytm->pobierzIloscWywolan() << std::endl;
    return 0;
}