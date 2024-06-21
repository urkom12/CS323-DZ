// CS323-DZ08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "KompleksniBroj.h"

int main() {
    KompleksniBroj z(3.0, 4.0);
    KompleksniBroj w(5.0, -2.0); 

    std::cout << "Z = " << z.getRealni() << " + " << z.getImaginarni() << "i" << std::endl;
    std::cout << "W = " << w.getRealni() << " + " << w.getImaginarni() << "i" << std::endl;

    std::cout << "Moduo Z: " << z.moduo() << std::endl;
    std::cout << "Moduo W: " << w.moduo() << std::endl;

    KompleksniBroj konjugovaniZ = z.konjugovano();
    KompleksniBroj konjugovaniW = w.konjugovano();
    std::cout << "Konjugovano Z: " << konjugovaniZ.getRealni() << " + " << konjugovaniZ.getImaginarni() << "i" << std::endl;
    std::cout << "Konjugovano W: " << konjugovaniW.getRealni() << " + " << konjugovaniW.getImaginarni() << "i" << std::endl;

    KompleksniBroj z_plus_w = z.saberi(w);
    KompleksniBroj z_minus_w = z.oduzmi(w);
    KompleksniBroj z_puta_w = z.pomnozi(w);

    std::cout << "Z + W = " << z_plus_w.getRealni() << " + " << z_plus_w.getImaginarni() << "i" << std::endl;
    std::cout << "Z - W = " << z_minus_w.getRealni() << " + " << z_minus_w.getImaginarni() << "i" << std::endl;
    std::cout << "Z * W = " << z_puta_w.getRealni() << " + " << z_puta_w.getImaginarni() << "i" << std::endl;

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
