#include <iostream>

using namespace std;

int main() {
    int umur = 7;
    int tinggi = 160;
    int tarif;

    if (umur < 1) {
        cout << "Dilarang masuk";
    } else if (umur >= 2 && umur <= 3 && tinggi > 70) {
        tarif = 40000;
        cout << "Tarif anda = " << tarif;
    } else if (umur < 3) {
        tarif = 30000;
        cout << "Tarif anda = " << tarif;
    } else if (umur >= 4 && umur <= 7 && tinggi > 120) {
        tarif = 55000;
        cout << "Tarif anda = " << tarif;
    } else if (umur < 7) {
        tarif = 40000;
        cout << "Tarif anda = " << tarif;
    } else if (umur >= 8 && umur <= 10 && tinggi > 150) {
        tarif = 70000;
        cout << "Tarif anda = " << tarif;
    } else if (umur < 10) {
        tarif = 50000;
        cout << "Tarif anda = " << tarif;
    } else {
        tarif = 80000;
        cout << "Tarif anda = " << tarif;
    }
}