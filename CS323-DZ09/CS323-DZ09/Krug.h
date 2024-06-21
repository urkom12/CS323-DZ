#define KRUG_H


class Krug {
private:
    double poluprecnik;

public:
    Krug();
    Krug(double r);
    Krug(const Krug& other);

    ~Krug();

    double getPoluprecnik() const;

    double izracunajPovrsinu() const;
    double izracunajObim() const;
    bool daLiJeUnutar(const Kvadrat& kvadrat) const;
};

