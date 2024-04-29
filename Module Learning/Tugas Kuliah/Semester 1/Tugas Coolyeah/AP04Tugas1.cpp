#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string nama;
    int umur;
    string tempatTinggal;
    int tabungan;

    cout << "Masukkan Nama : ";
    getline(cin, nama);
    cout << "Masukkan Umur : ";
    getline(cin, umur);
    cout << "Masukkan Tempat Tinggal : ";
    getline(cin, tempatTinggal);
    cout << "Masukkan Jumlah Tabungan : ";
    getline(cin, tabungan);

    string defaultValue = nama + " tidak mencurigakan";

    if (umur > 40) {
        if (tempatTinggal == "Nevada" || tempatTinggal == "New York" || tempatTinggal == "Havanda") {
            if (tabungan > 10000000) {
                cout << nama + " kemungkinan adalah seorang anggota mafia dengan Don";
            } else {
                cout << defaultValue;
            }
        } else {
            cout << defaultValue;
        }
    } else if (umur >= 25 && umur <= 40) {
        if (tempatTinggal == "Nevada" || tempatTinggal == "New Jersey" || tempatTinggal == "Manhattan") {
            if (tabungan >= 1000000 || tabungan <= 2000000) {
                cout << nama + " kemungkinan adalah seorang anggota mafia dengan Underboss";
            } else {
                cout << defaultValue;
            }
        } else {
            cout << defaultValue;
        }
    } else if (umur >= 18 && umur <= 24) {
        if (tempatTinggal == "California" || tempatTinggal == "Detroit" || tempatTinggal == "Boston") {
            if (tabungan < 1000000) {
                cout << nama + " kemungkinan adalah seorang anggota mafia dengan Capo";
            } else {
                cout << defaultValue;
            }
        } else {
            cout << defaultValue;
        }
    } else {
        cout << defaultValue;
    }

    return 0;
}
