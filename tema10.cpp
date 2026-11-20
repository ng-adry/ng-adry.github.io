
#include <iostream>
using namespace std;
class Dreptunghi {
private:
    int latime;
    int inaltime;
public:
    Dreptunghi(int l, int h) {
        if (l > 0 && h > 0) {
            latime = l;
            inaltime = h;
        } else {
            latime = 1;
            inaltime = 1;
        }
    }

    int aria() {
        return latime * inaltime;
    }

    void setLatime(int l) {
        if (l > 0) {
            latime = l;
            cout << "Latime modificata cu succes!" << endl;
        } else {
            cout << "Eroare: Latimea trebuie sa fie pozitiva!" << endl;
        }
    }
};


/*

Asemanari:
1. Ambele limbaje folosesc clase si obiecte.
2. Ambele permit incapsularea prin private si public.
Diferente:
1. In Java afisarea se face cu System.out.println(),
   iar in C++ se foloseste cout si endl.
2. In Java mostenirea se scrie cu extends,
   iar in C++ se foloseste simbolul : public.
*/


Aria initiala: 8
Eroare: Latimea trebuie sa fie pozitiva!
Aria dupa modificare: 8
*/
