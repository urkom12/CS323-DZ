#include "KompleksniBroj.h"
#include <cmath>
#include <iostream>

KompleksniBroj::KompleksniBroj() : realni(0.0), imaginarni(0.0) {
    std::cout << "Pozvan je podrazumevani konstruktor." << std::endl;
}

KompleksniBroj::KompleksniBroj(double re, double im) : realni(re), imaginarni(im) {
    std::cout << "Pozvan je konstruktor sa parametrima." << std::endl;
}

KompleksniBroj::KompleksniBroj(const KompleksniBroj& other) {
    this->realni = other.realni;
    this->imaginarni = other.imaginarni;
    std::cout << "Pozvan je konstruktor kopiranja." << std::endl;
}

KompleksniBroj::~KompleksniBroj() {
    std::cout << "Objekat je unisten." << std::endl;
}

double KompleksniBroj::getRealni() const {
    return realni;
}

double KompleksniBroj::getImaginarni() const {
    return imaginarni;
}

void KompleksniBroj::setRealni(double re) {
    realni = re;
}

void KompleksniBroj::setImaginarni(double im) {
    imaginarni = im;
}

double KompleksniBroj::moduo() const {
    return sqrt(realni * realni + imaginarni * imaginarni);
}

KompleksniBroj KompleksniBroj::konjugovano() const {
    return KompleksniBroj(realni, -imaginarni);
}

KompleksniBroj KompleksniBroj::saberi(const KompleksniBroj& other) const {
    return KompleksniBroj(realni + other.realni, imaginarni + other.imaginarni);
}

KompleksniBroj KompleksniBroj::oduzmi(const KompleksniBroj& other) const {
    return KompleksniBroj(realni - other.realni, imaginarni - other.imaginarni);
}

KompleksniBroj KompleksniBroj::pomnozi(const KompleksniBroj& other) const {
    double re = realni * other.realni - imaginarni * other.imaginarni;
    double im = realni * other.imaginarni + imaginarni * other.realni;
    return KompleksniBroj(re, im);
}

KompleksniBroj operator+(const KompleksniBroj& c1, const KompleksniBroj& c2) {
    return KompleksniBroj(c1.realni + c2.realni, c1.imaginarni + c2.imaginarni);
}

KompleksniBroj operator-(const KompleksniBroj& c1, const KompleksniBroj& c2) {
    return KompleksniBroj(c1.realni - c2.realni, c1.imaginarni - c2.imaginarni);
}

KompleksniBroj operator*(const KompleksniBroj& c1, const KompleksniBroj& c2) {
    double re = c1.realni * c2.realni - c1.imaginarni * c2.imaginarni;
    double im = c1.realni * c2.imaginarni + c1.imaginarni * c2.realni;
    return KompleksniBroj(re, im);
}
