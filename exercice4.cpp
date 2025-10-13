#include <iostream>
using namespace std;

int main() {
    int i, j , n; // j initialisé à 0 pour éviter comportement indéfini

    cout << "\n===== Exercice 4 =====\n";

    // 1
    i = 0;
    n = i++; // post-incrémentation → n = 0, i = 1
    cout << "A : i = " << i  << " n = " << n << "\n";

    // 2
    i = 10;
    n = ++i; // pré-incrémentation → i = 11, n = 11
    cout << "B : i = " << i  << " n = " << n << "\n";

    // 
    i = 20 ;
    j = 5;
    n = i++ * ++j; // i = i+1 ,j=6, n = 120 ;
    cout << "C : i = " << i <<"j = " << j << " n = " << n << "\n";

    // 
    i = 15;
    n = i += 3; // i = i + 3 → i = 18, n = 18
    cout << "D : i = "<< i <<"j = " << j << i <<  " n = " << n << "\n";

    // 
    j = 5;
    n = i *= --j; // i = -1, j = 4, n = -1 ;
    cout << "E : i = " << i << " j = " << j << " n = " << n << "\n";

    return 0;
}