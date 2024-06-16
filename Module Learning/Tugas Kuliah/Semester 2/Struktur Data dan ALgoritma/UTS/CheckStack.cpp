#include <iostream>
#include <stack>
#include <deque>
using namespace std;

// Fungsi untuk pengecekan bila dua stack memiliki nilai yang sama
bool areStacksEqual(stack<int> firstStack, stack<int> secondStack){
    // Cek ukuran kedua stack
    if (firstStack.size() != secondStack.size()){
        return false;
    }
    // Cek setiap elemen dalam stack
    while (!firstStack.empty() && !secondStack.empty()){
        if (firstStack.top() != secondStack.top()){
            return false;
        }
        firstStack.pop();
        secondStack.pop();
    }
    return true;
}

int main(){
    stack<int> firstStack;
    stack<int> secondStack;
    deque<int> buffer;
    int firstTotal, secondTotal, value;

    // Input elemen untuk firstStack
    cout << "***********************************************" << endl;
    cout << "Masukkan jumlah elemen untuk stack pertama: ";
    cin >> firstTotal;
    cout << "Masukkan elemen-elemen untuk stack pertama: " << endl;
    for (int i = 0; i < firstTotal; ++i){
        cin >> value;
        buffer.push_back(value); // Menyimpan sementara di buffer
    }
    // Memindahkan elemen dari buffer ke firstStack
    while (!buffer.empty()){
        firstStack.push(buffer.back());
        buffer.pop_back();
    }
    
    // Input elemen untuk secondStack
    cout << "***********************************************" << endl;
    cout << "Masukkan jumlah elemen untuk stack kedua: ";
    cin >> secondTotal;
    cout << "Masukkan elemen-elemen untuk stack kedua: " << endl;
    for (int i = 0; i < secondTotal; ++i){
        cin >> value;
        buffer.push_back(value); // Menyimpan sementara di buffer
    }
    // Memindahkan elemen dari buffer ke secondStack
    while (!buffer.empty()){
        secondStack.push(buffer.back());
        buffer.pop_back();
    }
    cout << "***********************************************" << endl;
    // Cek apakah kedua stack memiliki nilai yang sama
    if (areStacksEqual(firstStack, secondStack)){
        cout << "Kedua stack memiliki nilai yang sama." << endl;
    }
    else{
        cout << "Kedua stack tidak memiliki nilai yang sama." << endl;
    }
    cout << "***********************************************" << endl;
    return 0;
}