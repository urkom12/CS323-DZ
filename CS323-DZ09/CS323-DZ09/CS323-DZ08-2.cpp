#include <iostream>
#include "Kvadrat.h"
#include "Krug.h"

int main() {
    Kvadrat kvadrat(5.0);

    Krug krug(3.0);

    std::cout << "Povrsina kvadrata: " << kvadrat.izracunajPovrsinu() << std::endl;
    std::cout << "Obim kvadrata: " << kvadrat.izracunajObim() << std::endl;

    std::cout << "Povrsina kruga: " << krug.izracunajPovrsinu() << std::endl;
    std::cout << "Obim kruga: " << krug.izracunajObim() << std::endl;

    if (krug.daLiJeUnutar(kvadrat)) {
        std::cout << "Krug je unutar kvadrata." << std::endl;
    }
    else {
        std::cout << "Krug nije unutar kvadrata." << std::endl;
    }

    if (kvadrat.daLiJeUnutar(krug)) {
        std::cout << "Kvadrat je unutar kruga." << std::endl;
    }
    else {
        std::cout << "Kvadrat nije unutar kruga." << std::endl;
    }

    return 0;
}
