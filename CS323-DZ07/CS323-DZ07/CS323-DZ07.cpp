// CS323-DZ07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

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

int main() {
    double h1, w1, h2, w2;

    cout << "Unesite visinu i sirinu za prvi pravougaonik: ";
    cin >> h1 >> w1;

    cout << "Unesite visinu i sirinu za drugi pravougaonik: ";
    cin >> h2 >> w2;

    Pravougaonik pravougaonik1(h1, w1);
    Pravougaonik pravougaonik2(h2, w2);

    double povrsina1 = pravougaonik1.povrsina();
    double povrsina2 = pravougaonik2.povrsina();

    cout << fixed << setprecision(2);
    cout << "Povrsina prvog pravougaonika: " << povrsina1 << endl;
    cout << "Povrsina drugog pravougaonika: " << povrsina2 << endl;

    cout << ((povrsina1 > povrsina2) ? "Prvi ima vecu povrsinu" : "Drugi ima vecu povrsinu") << endl;

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
