#include "Kvadrat.h"
#include "Krug.h"
#include <iostream>

Kvadrat::Kvadrat(double a) {
    this->duzinaStranice = a;
}

Kvadrat::Kvadrat(const Kvadrat& other) {
    this->duzinaStranice = other.duzinaStranice;
}

Kvadrat::Kvadrat() {
    this->duzinaStranice = 0.0;
}

Kvadrat::~Kvadrat() {
    std::cout << "Objekat Kvadrat je unisten" << std::endl;
}

double Kvadrat::getDuzinaStranice() const {
    return duzinaStranice;
}

double Kvadrat::izracunajPovrsinu() const {
    return duzinaStranice * duzinaStranice;
}

double Kvadrat::izracunajObim() const {
    return 4 * duzinaStranice;
}

bool Kvadrat::daLiJeUnutar(const Krug& krug) const {
    double udaljenostCentara = 0.0;
    return udaljenostCentara < krug.getPoluprecnik();
}
