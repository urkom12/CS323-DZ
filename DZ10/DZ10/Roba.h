#define ROBA_H

#include "Artikal.h"

class Roba : public Artikal {
public:
    Roba(const std::string& ime, double cena);
    ~Roba();

    double izracunajCenuSaPDV() const override;
    void ispisi() const override;
};

