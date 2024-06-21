#include "Aktivnost.h"

int Aktivnost::brojKreiranihObjekata = 0;

Aktivnost::Aktivnost() : naziv(""), tip(""), opis(""), brojCasova(0) {
    brojKreiranihObjekata++;
}

Aktivnost::Aktivnost(std::string naziv, std::string tip, std::string opis, int brojCasova)
    : naziv(naziv), tip(tip), opis(opis), brojCasova(brojCasova) {
    brojKreiranihObjekata++;
}

Aktivnost::~Aktivnost() {
    brojKreiranihObjekata--;
    std::cout << "Objekat Aktivnost je unisten" << std::endl;
}

std::string Aktivnost::getNaziv() const {
    return naziv;
}

std::string Aktivnost::getTip() const {
    return tip;
}

std::string Aktivnost::getOpis() const {
    return opis;
}

int Aktivnost::getBrojCasova() const {
    return brojCasova;
}

void postaviNaziv(Aktivnost& a, const std::string& naziv) {
    a.naziv = naziv;
}

void postaviTip(Aktivnost& a, const std::string& tip) {
    a.tip = tip;
}

void postaviOpis(Aktivnost& a, const std::string& opis) {
    a.opis = opis;
}

void postaviBrojCasova(Aktivnost& a, int brojCasova) {
    a.brojCasova = brojCasova;
}

int Aktivnost::getBrojKreiranihObjekata() {
    return brojKreiranihObjekata;
}

std::string Aktivnost::generisiSlucajniTip() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static const char* tipovi[] = { "predavanje", "vezbe", "laboratorija", "zadatak", "projekat", "test" };
    std::uniform_int_distribution<> dis(0, 5);
    return tipovi[dis(gen)];
}

bool Aktivnost::operator<(const Aktivnost& other) const {
    return brojCasova < other.brojCasova;
}

bool Aktivnost::operator>(const Aktivnost& other) const {
    return brojCasova > other.brojCasova;
}

bool Aktivnost::operator==(const Aktivnost& other) const {
    return brojCasova == other.brojCasova;
}

std::istream& operator>>(std::istream& is, Aktivnost& a) {
    std::string naziv;
    std::string tip;
    std::string opis;
    int brojCasova;

    std::cout << "Unesite naziv aktivnosti: ";
    is >> naziv;
    postaviNaziv(a, naziv);

    std::cout << "Unesite tip aktivnosti (predavanje, vezbe, laboratorija, zadatak, projekat, test): ";
    is >> tip;
    postaviTip(a, tip);

    std::cout << "Unesite opis aktivnosti: ";
    is >> opis;
    postaviOpis(a, opis);

    std::cout << "Unesite broj casova (0-5): ";
    is >> brojCasova;
    postaviBrojCasova(a, brojCasova);

    return is;
}

std::ostream& operator<<(std::ostream& os, const Aktivnost& a) {
    os << "Naziv: " << a.naziv << std::endl;
    os << "Tip: " << a.tip << std::endl;
    os << "Opis: " << a.opis << std::endl;
    os << "Broj casova: " << a.brojCasova << std::endl;
    return os;
}
