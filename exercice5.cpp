#include <iostream>
using namespace std;

// ------------------------------------------------------------
// Fonction qui remplit le tableau en utilisant les pointeurs
// ------------------------------------------------------------
void remplir(int* arr, int n) {
    cout << "Entrez " << n << " entiers : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> *(arr + i);  // équivalent à arr[i]
    }
}

// ------------------------------------------------------------
// Fonction qui affiche le tableau à l'aide de pointeurs
// ------------------------------------------------------------
void afficher(const int* arr, int n) {
    cout << "Contenu du tableau : ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";  // équivalent à arr[i]
    }
    cout << endl;
}

// ------------------------------------------------------------
// Fonction qui retourne une référence vers le plus grand élément
// ------------------------------------------------------------
int& trouverMax(int* arr, int n) {
    int* maxPtr = arr;  // pointeur vers le premier élément
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > *maxPtr)
            maxPtr = arr + i;
    }
    return *maxPtr;  // retourne une référence
}

// ------------------------------------------------------------
// Fonction qui inverse le tableau en place (sans tableau temporaire)
// ------------------------------------------------------------
void inverser(int* arr, int n) {
    int* debut = arr;         // pointeur sur le début du tableau
    int* fin = arr + n - 1;   // pointeur sur la fin du tableau

    while (debut < fin) {
        int temp = *debut;
        *debut = *fin;
        *fin = temp;
        debut++;
        fin--;
    }
}

// ------------------------------------------------------------
// Programme principal
// ------------------------------------------------------------
int main() {
    int n;
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    // Allocation dynamique du tableau
    int* tableau = new int[n];

    // Remplir le tableau
    remplir(tableau, n);

    // Afficher le tableau original
    cout << "\nTableau original : ";
    afficher(tableau, n);

    // Trouver et afficher le maximum
    int& maxRef = trouverMax(tableau, n);
    cout << "\nLe maximum est : " << maxRef << endl;

    // Modifier directement le maximum via la référence
    cout << "Entrez une nouvelle valeur pour le maximum : ";
    cin >> maxRef;

    // Afficher le tableau après modification du maximum
    cout << "\nTableau après modification du maximum : ";
    afficher(tableau, n);

    // Inverser le tableau
    inverser(tableau, n);
    cout << "\nTableau inversé : ";
    afficher(tableau, n);

    // Libérer la mémoire allouée dynamiquement
    delete[] tableau;

    cout << "\nMémoire libérée. Programme terminé." << endl;
    return 0;
}
