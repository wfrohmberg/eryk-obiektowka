#pragma once

#include "instancja_problemu.h"

class Algorytm {
protected:
    InstancjaProblemu* instancja;
    int iloscWywolan = 0;
public: 
    virtual void wykonaj();

    int pobierzIloscWywolan() const;
};