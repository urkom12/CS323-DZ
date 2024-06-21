#include "Krug.h"
#include "Kvadrat.h"
#include <iostream>

Krug::Krug(double r) {
    this->poluprecnik = r;
}

Krug::Krug(const Krug& other) {
    this->poluprecnik = other.poluprecnik;
}

Krug::Krug() {
    this->poluprecnik = 0.0;
}

Krug::~Krug() {
    std::cout << "Objekat Krug je unisten" << std::endl;
}

double Krug::getPoluprecnik() const {
    return poluprecnik;
}

double Krug::izracunajPovrsinu() const {
    return 3.14 * poluprecnik * poluprecnik;
}

double Krug::izracunajObim() const {
    return 2 * 3.14 * poluprecnik;
}

bool Krug::daLiJeUnutar(const Kvadrat& kvadrat) const {
    double udaljenostCentara = 0.0;
    return udaljenostCentara < kvadrat.getDuzinaStranice() / 2;
}
