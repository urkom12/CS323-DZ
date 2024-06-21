#define AKTIVNOST_H

#include <iostream>
#include <string>
#include <random>
#include <ctime>

class Aktivnost {
private:
    std::string naziv;
    std::string tip;
    std::string opis;
    int brojCasova;

    static int brojKreiranihObjekata;

public:
    Aktivnost();
    Aktivnost(std::string naziv, std::string tip, std::string opis, int brojCasova);

    ~Aktivnost();

    std::string getNaziv() const;
    std::string getTip() const;
    std::string getOpis() const;
    int getBrojCasova() const;

    friend void postaviNaziv(Aktivnost& a, const std::string& naziv);
    friend void postaviTip(Aktivnost& a, const std::string& tip);
    friend void postaviOpis(Aktivnost& a, const std::string& opis);
    friend void postaviBrojCasova(Aktivnost& a, int brojCasova);

    static int getBrojKreiranihObjekata();

    static std::string generisiSlucajniTip();

    bool operator<(const Aktivnost& other) const;
    bool operator>(const Aktivnost& other) const;
    bool operator==(const Aktivnost& other) const;

    friend std::istream& operator>>(std::istream& is, Aktivnost& a);
    friend std::ostream& operator<<(std::ostream& os, const Aktivnost& a);
};

