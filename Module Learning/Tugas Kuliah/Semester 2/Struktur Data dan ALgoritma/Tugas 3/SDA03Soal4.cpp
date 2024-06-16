#include <iostream>

using namespace std;

float hitungKalori(float olahraga, float menit){
    float kalori;
    if (olahraga == 1){
        cout << "Berlari membakar 60 kalori tiap 5 menit.." << endl;
        kalori = menit/5*60;
        cout << "Total Kalori terbakar = " << kalori << endl;
        return kalori;
    } else if (olahraga == 2){
        cout << "Push-Up membakar 200 kalori tiap 30 menit.." << endl;;
        kalori = menit/30*200;
        cout << "Total Kalori terbakar = " << kalori << endl;
        return kalori;
    } else if (olahraga == 3){
        cout << "Plank membakar 5 kalori tiap 1 menit.." << endl;
        kalori = menit/1*5;
        cout << "Total Kalori terbakar = " << kalori << endl;
        return kalori;
    } else{
        cout << "Nomor Olahraga Tidak Valid" << endl;
        return kalori = 0;
    }
}

int main(){
    float olahraga;
    float menit;
    float totalKalori;
    char token = 'N';

    cout << "===================================" << endl;
    cout << "=== PROGRAM PENGHITUNGAN KALORI ===" << endl;
    
    do{
        cout << "===================================" << endl;
        cout << "1. Lari" << endl;
        cout << "2. Push-Up" << endl;
        cout << "3. Plank" << endl;
        cout << "===================================" << endl;
        cout << "Pilih olahraga di atas dengan angka: ";
        cin >> olahraga;
        cout << "Masukkan lama waktu olahraga (Menit): ";
        cin >> menit;

        totalKalori+=hitungKalori(olahraga, menit);
        cout << "Olahraga lagi? (Y/N)" << endl;
        cin >> token;
    } while (token == 'Y' || token == 'y');
    cout << "===================================" << endl;
    cout << "Total Kalori Terbakar = " << totalKalori << endl;
    cout << "===================================" << endl;
}