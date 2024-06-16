#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

struct Menu {
    string nama;
    int harga;
};

// Menu Tertera
void listMakanan(const Menu menuMakanan[], int jumlahMenu){
    cout << "**************************************" << endl;
    cout << "*            MENU MAKANAN            *" << endl;
    cout << "**************************************" << endl;
    for (int i = 0; i < jumlahMenu; i++)
    {
        cout << "  " << menuMakanan[i].nama << ": " << menuMakanan[i].harga << endl;
    }
    cout << "**************************************" << endl;
}

// Fungsi untuk membaca input pesanan dari pengguna
vector<pair<string, int>> bacaPesanan() {
    string input;
    cout << "Isikan Makanan yang dipesan: ";
    getline(cin, input);

    stringstream ss(input);
    string namaMakanan;
    int jumlahPorsi;
    vector<pair<string, int>> pesanan;

    while (ss >> namaMakanan >> jumlahPorsi) {
        pesanan.push_back(make_pair(namaMakanan, jumlahPorsi));
    }

    return pesanan;
}

// Fungsi untuk mencari harga makanan berdasarkan nama
int cariHarga(const Menu menuMakanan[], int jumlahMenu, const string& namaMakanan) {
    for (int i = 0; i < jumlahMenu; ++i) {
        if (menuMakanan[i].nama == namaMakanan) {
            return menuMakanan[i].harga;
        }
    }
    return 0; // Jika nama makanan tidak ditemukan
}

// Fungsi untuk menghitung total harga pesanan
int hitungTotalHarga(const vector<pair<string, int>>& pesanan, const Menu menuMakanan[], int jumlahMenu) {
    int totalHarga = 0;

    for (const auto& p : pesanan) {
        string nama = p.first;
        int porsi = p.second;
        int harga = cariHarga(menuMakanan, jumlahMenu, nama);
        int subtotal = harga * porsi;
        totalHarga += subtotal;
    }

    return totalHarga;
}

// Fungsi untuk menampilkan rincian pesanan dan total harga
void tampilkanPesanan(const vector<pair<string, int>>& pesanan, const Menu menuMakanan[], int jumlahMenu, int totalHarga) {
    cout << "Total Harga:" << endl;

    for (const auto& p : pesanan) {
        string nama = p.first;
        int porsi = p.second;
        int harga = cariHarga(menuMakanan, jumlahMenu, nama);
        int subtotal = harga * porsi;

        cout << "  " << nama << " @" << harga << " * " << porsi << " = " << subtotal << endl;
    }

    cout << "Total = " << totalHarga << endl;
}

int main() {
    // Definisikan menu makanan dan harga
    Menu menuMakanan[] = {
        {"Soto", 15000},
        {"Rawon", 20000},
        {"Pecel", 10000},
        {"Bakso", 12500},
        {"Siomay", 25000}
    };
    int jumlahMenu = sizeof(menuMakanan) / sizeof(Menu);

    listMakanan(menuMakanan, jumlahMenu);
    // Baca pesanan dari pengguna
    vector<pair<string, int>> pesanan = bacaPesanan();

    // Hitung total harga pesanan
    int totalHarga = hitungTotalHarga(pesanan, menuMakanan, jumlahMenu);

    // Tampilkan rincian pesanan dan total harga
    tampilkanPesanan(pesanan, menuMakanan, jumlahMenu, totalHarga);

    return 0;
}
