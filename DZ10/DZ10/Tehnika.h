#define TEHNIKA_H

#include "Artikal.h"

class Tehnika : public Artikal {
public:
    Tehnika(const std::string& ime, double cena);
    ~Tehnika();

    double izracunajCenuSaPDV() const override;
    void ispisi() const override;
};

