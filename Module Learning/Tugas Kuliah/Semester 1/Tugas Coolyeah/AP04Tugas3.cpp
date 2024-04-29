#include <iostream>

using namespace std;

int main(){
    int noPunggung = 18;
    string position;

    if (noPunggung % 2 == 0 && noPunggung > 50 && noPunggung < 100) {
        position = "Target Attacker";
        cout << position;
    } else if (noPunggung % 2 == 0) {
        position = "Berhak dipilih menjadi Captain Team";
        cout << position;
    } else if (noPunggung % 3 == 0 && noPunggung % 5 == 0) {
        position = "Keeper";
        cout << position;
    } else if (noPunggung % 2 == 1 && noPunggung > 90) {
        position = "Playmaker";
        cout << position;
    } else {
        position = "Defender";
        cout << position;
    }
    
}