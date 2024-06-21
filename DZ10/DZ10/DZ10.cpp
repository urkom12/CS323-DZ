#include <iostream>
#include "Artikal.h"
#include "Roba.h"
#include "Tehnika.h"

int main() {
    Roba r("Bela majica", 500.0);
    Tehnika t("Laptop", 60000.0);

    r.ispisi();
    t.ispisi();

    return 0;
}
