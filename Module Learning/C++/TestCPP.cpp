#include <iostream>
using namespace std;
int main()
{
    string nama = "Nico Ardy";
    string nim = "230401010076";
    double nilaiAbsen = 80;
    double nilaiTugas = 85;
    double nilaiUTS = 75;
    double nilaiUAS = 95;

    double nilaiAkhir = 10.0/100.0*nilaiAbsen + 20.0/100.0*nilaiTugas + 30.0/100.0*nilaiUTS + 40.0/100.0*nilaiUAS;
    char nilaiHuruf;
    if (nilaiAkhir >= 80.0) {
        nilaiHuruf = 'A';
    } else if (nilaiAkhir >= 70.0 && nilaiAkhir < 80.0){
        nilaiHuruf = 'B';
    } else if (nilaiAkhir >= 55.0 && nilaiAkhir < 70.0){
        nilaiHuruf = 'C';
    } else if (nilaiAkhir >= 40.0 && nilaiAkhir < 55.0){
        nilaiHuruf = 'D';
    } else {
        nilaiHuruf = 'E';
    }

    string statusLulus = "GAGAL";
    if (nilaiAkhir >= 55.0) {
        statusLulus = "LULUS";
    }

    cout << nama << ", " << nim << ", " << nilaiAkhir << ", " << nilaiHuruf << ", " << statusLulus;
}