#include <iostream>
using namespace std;

int main() {
    int n = 5, p = 9;
    int q;
    float x;

    cout << "\n===== Exercice 3 =====\n";

    // 1- q = n < p → (5 < 9) → vrai → 1
    q = n < p;
    cout << "1) q = n < p --> " << q << endl;

    // 2- q = n == p → (5 == 9) → faux → 0
    q = n == p;
    cout << "2) q = n == p --> " << q << endl;

    // 3- q = p % n + p > n
    // p % n = 9 % 5 = 4 → 4 + 9 = 13 > 9 → vrai → 1
    q = p % n + p > n;
    cout << "3) q = p % n + p > n --> " << q << endl;

    // 4- x = p / n → division entière : 9 / 5 = 1
    x = p / n;
    cout << "4) x = p / n --> " << x << endl;

    // 5- x = (float)p / n → 9.0 / 5 = 1.8
    x = (float)p / n;
    cout << "5) x = (float)p / n --> " << x << endl;

    // 6- x = (p + 0.5) / n → 9.5 / 5 = 1.9
    x = (p + 0.5) / n;
    cout << "6) x = (p + 0.5) / n --> " << x << endl;

    // 7- x = (int)(p + 0.5) / n → (int)(9.5) = 9 → 9 / 5 = 1
    x = (int)(p + 0.5) / n;
    cout << "7) x = (int)(p + 0.5) / n --> " << x << endl;

    // 8- q = n * (p > n ? n : p)
    // p > n → vrai → q = 5 * 9 = 45
    q = n * (p > n ? n : p);
    cout << "8) q = n * (p > n ? n : p) --> " << q << endl;
    // 9 q = n * (p < n ? n : p)
    // p < n   → faux   → q = 5 * 9;
    q = n * (p<n ? n : p);
    cout << "9) q = n * (p < n ? n : p)-->"<< q  ;
    return 0;
}
