#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Aktivnost.h"

class RandomPodaci {
public:
    static std::string generisiRandomRec() {
        std::string rec = "";
        rec += (char)(rand() % 26 + 'A');
        for (int i = 0; i < 10; ++i) {
            rec += (char)(rand() % 26 + 'a');
        }
        return rec;
    }

    static int generisiRandomBrojCasova() {
        return rand() % 6;
    }
};

int main() {
    srand(time(NULL));

    Aktivnost a1(RandomPodaci::generisiRandomRec(), Aktivnost::generisiSlucajniTip(),
        RandomPodaci::generisiRandomRec(), RandomPodaci::generisiRandomBrojCasova());
    Aktivnost a2(RandomPodaci::generisiRandomRec(), Aktivnost::generisiSlucajniTip(),
        RandomPodaci::generisiRandomRec(), RandomPodaci::generisiRandomBrojCasova());

    std::cout << "Prva aktivnost:" << std::endl;
    std::cout << a1 << std::endl;

    std::cout << "Druga aktivnost:" << std::endl;
    std::cout << a2 << std::endl;

    std::cout << "Trenutni broj kreiranih objekata: " << Aktivnost::getBrojKreiranihObjekata() << std::endl;

    return 0;
}
