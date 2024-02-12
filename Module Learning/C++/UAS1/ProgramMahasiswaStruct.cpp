#include <iostream>
using namespace std;

struct Mahasiswa {
    string NIM, NAMA;
    float NILAI_PEMROGRAMAN;
};

int main(){
    int counter = 10;
    Mahasiswa mhsw[counter];

    for (int i = 0; i < counter; i++) {
        cout << "Masukkan data mahasiswa " << i+1 << endl;
        cout << "NIM: ";
        cin >> mhsw[i].NIM;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, mhsw[i].NAMA);
        cout << "Nilai: ";
        cin >> mhsw[i].NILAI_PEMROGRAMAN;
        cout << endl;
    }

    cout << "Data Mahasiswa:" << endl;
    cout << "-------------------------" << endl;

    float nilaiTotal = 0.0;
    for (int i = 0; i < counter; i++) {
        cout << i+1 << ". " << mhsw[i].NIM << " | " << mhsw[i].NAMA << " | " << mhsw[i].NILAI_PEMROGRAMAN << endl;
        nilaiTotal += mhsw[i].NILAI_PEMROGRAMAN;
    }

    float rataRata = nilaiTotal/counter;
    cout << "Nilai rata-rata dari semua mahasiswa: " << rataRata << endl;

    return 0;
}