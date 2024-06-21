#include "Tehnika.h"
#include <iostream>

Tehnika::Tehnika(const std::string& ime, double cena)
    : Artikal(ime, cena) {}

Tehnika::~Tehnika() {}

double Tehnika::izracunajCenuSaPDV() const {
    return cena * 1.08;
}

void Tehnika::ispisi() const {
    std::cout << "Tehnika: " << ime << ", Cena sa PDV (8%): " << izracunajCenuSaPDV() << " dinara" << std::endl;
}
