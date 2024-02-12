#include <iostream>

#include <string>

#include <sstream>

using namespace std;

int main()
{

    string init_string = "Welcome to Simplilearn";

    // Creating stringstream object

    stringstream ss(init_string);

    cout << "This is a StringStream object\n";

    // Array to store returned words

    string ret_words[5];

    string buf;

    int x = 0;

    while (ss >> buf)
    {

        ret_words[x] = buf;

        cout << "The Buffer: " << buf << endl;

        x++;
    }

    // Printing the string

    cout << "Printing the array of strings\n";
    cout << ret_words[5];

    for (int y = 0; y < x; y++)
    {

        cout << ret_words[y] << endl;
    }

    return 0;
}