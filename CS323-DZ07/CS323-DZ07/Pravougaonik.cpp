#include <iostream>
#include <iomanip>

class Pravougaonik {
private:
    double visina;
    double sirina;

public:
    Pravougaonik(double h, double w) : visina(h), sirina(w) {}

    double povrsina() const {
        return visina * sirina;
    }
};