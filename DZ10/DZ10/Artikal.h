#pragma once
#define ARTIKAL_H

#include <string>

class Artikal {
protected:
    std::string ime;
    double cena;

public:
    Artikal(const std::string& ime, double cena);
    virtual ~Artikal();

    virtual double izracunajCenuSaPDV() const = 0;
    virtual void ispisi() const;
};



