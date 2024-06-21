#include "Roba.h"
#include <iostream>

Roba::Roba(const std::string& ime, double cena)
    : Artikal(ime, cena) {}

Roba::~Roba() {}

double Roba::izracunajCenuSaPDV() const {
    return cena * 1.20; 
}

void Roba::ispisi() const {
    std::cout << "Roba: " << ime << ", Cena sa PDV (20%): " << izracunajCenuSaPDV() << " dinara" << std::endl;
}
