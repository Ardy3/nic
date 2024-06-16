/* Nama        : Nico Ardy Hermawan */
/* NIM         : 230401010076 */
/* Kelas       : IT201 */
/* Mata Kuliah : Struktur Data dan Algoritma */

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Daftar Daerah
    string daerah[] = {"Jakarta", "Malang", "Surabaya", "Bandung", "Garut", "Depok", "Tangerang"};
    int n = sizeof(daerah) / sizeof(daerah[0]);
    
    // Mengurutkan daerah menggunakan bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (daerah[j] > daerah[j + 1]) {
                // Menukar posisi jika daerah[j] lebih besar dari daerah[j + 1]
                string temp = daerah[j];
                daerah[j] = daerah[j + 1];
                daerah[j + 1] = temp;
            }
        }
    }
    
    // Menampilkan daftar daerah yang telah diurutkan
    cout << "Daftar daerah setelah diurutkan:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << daerah[i] << endl;
    }

    return 0;
}