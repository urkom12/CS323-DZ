#include "Artikal.h"
#include <iostream>

Artikal::Artikal(const std::string& ime, double cena)
    : ime(ime), cena(cena) {}

Artikal::~Artikal() {}

void Artikal::ispisi() const {
    std::cout << "Artikal: " << ime << ", Cena: " << cena << " dinara" << std::endl;
}
