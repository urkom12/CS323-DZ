#define KOMPLEKSNI_BROJ_H

class KompleksniBroj {
private:
    double realni;
    double imaginarni;

public:
    KompleksniBroj();
    KompleksniBroj(double re, double im);
    KompleksniBroj(const KompleksniBroj& other);

    ~KompleksniBroj();

    double getRealni() const;
    double getImaginarni() const;

    void setRealni(double re);
    void setImaginarni(double im);

    double moduo() const;

    KompleksniBroj konjugovano() const;

    KompleksniBroj saberi(const KompleksniBroj& other) const;
    KompleksniBroj oduzmi(const KompleksniBroj& other) const;
    KompleksniBroj pomnozi(const KompleksniBroj& other) const;

    friend KompleksniBroj operator+(const KompleksniBroj& c1, const KompleksniBroj& c2);
    friend KompleksniBroj operator-(const KompleksniBroj& c1, const KompleksniBroj& c2);
    friend KompleksniBroj operator*(const KompleksniBroj& c1, const KompleksniBroj& c2);
};