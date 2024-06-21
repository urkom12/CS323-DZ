#define KVADRAT_H


class Kvadrat {
private:
    double duzinaStranice;

public:
    Kvadrat();
    Kvadrat(double a); 
    Kvadrat(const Kvadrat& other);

    ~Kvadrat();

    double getDuzinaStranice() const; 

    double izracunajPovrsinu() const; 
    double izracunajObim() const;
    bool daLiJeUnutar(const Krug& krug) const; 
};

