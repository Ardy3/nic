#include <iostream>
using namespace std;

bool cekPrima(int theNumber) {
    if (theNumber <= 1) {
        return false;
    }
    for (int i = 2; i < theNumber; i++) {
        if (theNumber % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int minimumNumber;
    int maximumNumber;
    int counter = 0;
    int totalNumber[counter];

    cout << "Masukkan Batas Awal Angka" << endl;
    cin >> minimumNumber;
    cout << "Masukkan Batas Akhir Angka" << endl;
    cin >> maximumNumber;

    for (int theNumber = minimumNumber; theNumber <= maximumNumber; theNumber++) {
        if (cekPrima(theNumber)) {
            totalNumber[counter] = theNumber;
            counter++;
        }
    }

    cout << "Jumlah bilangan prima dari " << minimumNumber << " sampai " << maximumNumber << " adalah " << counter << ", yaitu :" << endl;
    for (int i = 0; i < counter; i++) {
        cout << totalNumber[i];
        if (i != counter - 1) {
            cout << ", ";
        }
    }

    return 0;
}