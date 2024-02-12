#include <iostream>
#include <string>
using namespace std;

bool cariPalindrom(string angka) {
    string palindrom;
    string hasil;
    
    for (int i = angka.length(); i > 0; i--) {
        palindrom = angka.substr(i-1, 1);
        hasil = hasil.append(palindrom);
    }
    if (angka == hasil)
    {
        return true;
    }
    

    return false;
}

int main() {
    int counter;
    int angka;

    cout << "Input angka untuk mencari palindrom terdekat :" << endl;
    cin >> angka;
    
    counter = angka + 1;
    for (int i = angka; i < counter; i++) {
        if (cariPalindrom(to_string(i))) {
            cout << "Angka Palindrom terdekat : " << i << endl;
        } else {
            counter++;
        }
    }

    return 0;
}