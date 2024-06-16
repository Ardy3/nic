#include <iostream>
using namespace std;

// Komponen
struct Lagu {
    string judul, penyanyi;
    int tahunRilis;

    Lagu *next;
};

// Variabel Pointer
Lagu *head, *tail, *cur, *newNode;

// Function Create Linked List
void createSingleLinkedList(string judul, string penyanyi, int tahunRilis){
    head = new Lagu();
    head->judul = judul;
    head->penyanyi = penyanyi;
    head->tahunRilis = tahunRilis;
    head->next = NULL;
    tail = head;
}

// Function Create to First Linked List
void addFirst(string judul, string penyanyi, int tahunRilis){
    newNode = new Lagu();
    newNode->judul = judul;
    newNode->penyanyi = penyanyi;
    newNode->tahunRilis = tahunRilis;
    newNode->next = head;
    head = newNode;
}

// Function Create to Last Linked List
void addLast(string judul, string penyanyi, int tahunRilis){
    newNode = new Lagu();
    newNode->judul = judul;
    newNode->penyanyi = penyanyi;
    newNode->tahunRilis = tahunRilis;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

// Function Print Linked List
void printSingleLinkedList(){
    cur = head;
    while (cur != NULL){
        cout << "Judul Lagu: " << cur->judul << endl;
        cout << "Penyanyi: " << cur->penyanyi << endl;
        cout << "Tahun Rilis: " << cur->tahunRilis << endl;

        cur = cur->next;
    }
}

int main(){
    createSingleLinkedList("Drunk Text", "Henry Moodie", 2023);
    printSingleLinkedList();

    cout << "\n\n" << endl;

    addFirst("Kata", "Rizky Febian", 2024);
    printSingleLinkedList();

    cout << "\n\n" << endl;

    addLast("Mawar Jingga", "Juicy Luicy", 2016);
    printSingleLinkedList();
}
