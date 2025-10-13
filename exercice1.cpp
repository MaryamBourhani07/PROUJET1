#include <iostream>
#include<string>
using namespace std;

int main() {
    // Déclarations
    char c = '\x01';      // caractère ayant le code ASCII 1
    short int p = 10;     // entier court

    cout << "===== Exercice 1 =====\n";

    // Expression : p + 3
    // p est un short, mais les calculs se font en int → résultat de type int
    cout << "p + 3 = " << (p + 3) << " (type int, valeur = 13)\n";

    //  Expression : c + 1
    // c est un char (code ASCII 1), donc 1 + 1 = 2
    cout << "c + 1 = " << (int)(c + 1) << " (type int, valeur = 2)\n";

    //  Expression : p + c
    // 10 + 1 = 11
    cout << "p + c = " << (p + c) << " (type int, valeur = 11)\n";
    //  Expression : 3 * p + 5 * c
    // 3*10 + 5*1 = 30 + 5 = 35
    cout << "3 * p + 5 * c = " << (3 * p + 5 * c) << " (type int, valeur = 35)\n";

    return 0;
}
