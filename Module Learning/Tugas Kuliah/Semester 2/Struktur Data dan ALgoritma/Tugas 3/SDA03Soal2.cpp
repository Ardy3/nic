#include <iostream>

using namespace std; 

int main(){
    int nilaiCoding = 61;
    string nilaiInterview = "B";
    string testCoding;
    string testInterview;

    if (nilaiCoding > 80) {
        testCoding = "LOLOS";
        if (nilaiInterview == "A" || nilaiInterview == "B") {
            testInterview = "LOLOS";
            if (testCoding == "LOLOS" || testCoding == "DIPERTIMBANGKAN" && testInterview == "LOLOS") {
                cout << "Selamat Kamu Berhasil Menjadi Calon Programmer";
            } else {
                cout << "Maaf Kamu Belum Berhasil Menjadi Calon  Programmer";
            }
        } else {
            testInterview = "GAGAL";
            if (testCoding == "LOLOS" || testCoding == "DIPERTIMBANGKAN" && testInterview == "LOLOS") {
                cout << "Selamat Kamu Berhasil Menjadi Calon Programmer";
            } else {
                cout << "Maaf Kamu Belum Berhasil Menjadi Calon  Programmer";
            }
        }
    } else if (nilaiCoding > 60 && nilaiCoding <= 80) {
        testCoding = "DIPERTIMBANGKAN";
        if (nilaiInterview == "A" || nilaiInterview == "B") {
            testInterview = "LOLOS";
            if (testCoding == "LOLOS" || testCoding == "DIPERTIMBANGKAN" && testInterview == "LOLOS") {
                cout << "Selamat Kamu Berhasil Menjadi Calon Programmer";
            } else {
                cout << "Maaf Kamu Belum Berhasil Menjadi Calon  Programmer";
            }
        } else {
            testInterview = "GAGAL";
            if (testCoding == "LOLOS" || testCoding == "DIPERTIMBANGKAN" && testInterview == "LOLOS") {
                cout << "Selamat Kamu Berhasil Menjadi Calon Programmer";
            } else {
                cout << "Maaf Kamu Belum Berhasil Menjadi Calon  Programmer";
            }
        }
    } else if (nilaiCoding <= 60) {
        testCoding = "GAGAL";
        if (nilaiInterview == "A" || nilaiInterview == "B") {
            testInterview = "LOLOS";
            if (testCoding == "LOLOS" || testCoding == "DIPERTIMBANGKAN" && testInterview == "LOLOS") {
                cout << "Selamat Kamu Berhasil Menjadi Calon Programmer";
            } else {
                cout << "Maaf Kamu Belum Berhasil Menjadi Calon  Programmer";
            }
        } else {
            testInterview = "GAGAL";
            if (testCoding == "LOLOS" || testCoding == "DIPERTIMBANGKAN" && testInterview == "LOLOS") {
                cout << "Selamat Kamu Berhasil Menjadi Calon Programmer";
            } else {
                cout << "Maaf Kamu Belum Berhasil Menjadi Calon  Programmer";
            }
        }
    } else {
        cout << "Nilai Coding Invalid";
    }
    
}