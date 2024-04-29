#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void sensorKata(string kalimat, string kata_yang_disensor, char karakter_untuk_sensor) {
    string newKalimat;

    stringstream ss(kalimat);
    vector<string> words;
    // Memisahkan string berdasarkan spasi dan menyimpannya ke dalam vektor
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    // looping kata untuk check apakah ada kata yg harus di sensor
    int i = 0;
    for (const auto& w : words) {
        if (i > 0) {
            newKalimat += " "; 
        }
        i++;
        if (w == kata_yang_disensor) {
        // looping untuk menyesuaikan karakter untuk sensor dengan jumlah huruf dari kata yang disensor
            for (size_t j = 0; j < kata_yang_disensor.length(); j++)
            {
                kata_yang_disensor[j] = karakter_untuk_sensor;
            }
            newKalimat += kata_yang_disensor;
            continue;
        }
        newKalimat += w;
    }

    
    cout << newKalimat << endl;
}

int main() {
    string kalimat, kata;
    char sensor;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    cout << "Masukkann kata yang akan disensor: ";
    getline(cin, kata);
    cout << "Masukkan karakter untuk sensor: ";
    cin >> sensor;

    sensorKata(kalimat, kata, sensor);

    cin.get();
    return 0;
}