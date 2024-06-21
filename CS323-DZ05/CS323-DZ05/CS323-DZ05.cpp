// CS323-DZ05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <string.h>

struct Datum {
    int dan;
    int mesec;
    int godina;
};

struct Licnost {
    char ime[30];
    char adresa[50];
    struct Datum datum;
};

void ispisiOsobu(struct Licnost osoba) {
    printf("Ime: %s\n", osoba.ime);
    printf("Adresa: %s\n", osoba.adresa);
    printf("Datum rodjenja: %02d.%02d.%d\n", osoba.datum.dan, osoba.datum.mesec, osoba.datum.godina);
}

struct Licnost najstarijaOsoba1995(struct Licnost osobe[], int brojOsoba) {
    struct Licnost najstarija;
    int pronadjena = 0; 

    for (int i = 0; i < brojOsoba; i++) {
        if (osobe[i].datum.godina == 1995) {
            if (!pronadjena || osobe[i].datum.mesec < najstarija.datum.mesec ||
                (osobe[i].datum.mesec == najstarija.datum.mesec && osobe[i].datum.dan < najstarija.datum.dan)) {
                najstarija = osobe[i];
                pronadjena = 1;
            }
        }
    }

    if (!pronadjena) {
        printf("Nema osoba rodjenih 1995. godine.\n");
        strcpy_s(najstarija.ime, "Nepoznato");
    }

    return najstarija;
}

int main() {
    struct Licnost osobe[] = {
        {"Marko Markovic", "Adresa 1", {15, 3, 1993}},
        {"Ana Antic", "Adresa 2", {5, 9, 1995}},
        {"Petar Petrovic", "Adresa 3", {25, 7, 1995}},
        {"Jovana Jovanovic", "Adresa 4", {10, 1, 1995}},
        {"Milan Milic", "Adresa 5", {12, 8, 1994}},
    };

    int brojOsoba = sizeof(osobe) / sizeof(osobe[0]);

    struct Licnost najstarija1995 = najstarijaOsoba1995(osobe, brojOsoba);

    printf("Najstarija osoba rođena 1995. godine:\n");
    ispisiOsobu(najstarija1995);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
