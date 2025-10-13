#include <iostream>
using namespace std;

int main() {
    // Déclarations
    char c = '\x05';   // caractère de code ASCII 5
    int n = 5;
    long p = 1000;
    float x = 1.25;
    double Z = 5.5;

    cout << "\n===== Exercice 2 =====\n";

    //  n + c + p → int + char + long = int
    cout << "n + c + p = " << (n + c + p) << " (type int, valeur = 1010)\n";

    //  2 * x + c→ int * float + char = float
    cout << "2 * x + c = " << (2 * x + c) << " (type float, valeur = 7.5)\n";

    //  (char)n + c → n converti en char (valeur ASCII 5) + 5 = 10
    cout << "(char)n + c = " << ((char)n + c) << " (type int, valeur = 10)\n";

    //  (float)z + n / 2 → n/2 = 2 (division entière), donc 5.5 + 2 = 7.5
    cout << "(float)z + n / 2 = " << ((float)x + n / 2) << " (type float, valeur = 7.5)\n";

    return 0;
}