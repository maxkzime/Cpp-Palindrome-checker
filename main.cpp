// Palindrome/main.cpp
// BODIN Maxime
// 27/01/2022

#include "functions.h"

using std::cin, std::cout;

int main()
{
    int choice = 0;
    cout << "[1] Test a dictionnary \n[2] Test a word \n";
    while (choice != 1 && choice !=2) {
        cin >> choice;cin.ignore();
    }

    switch (choice) {
    case 1: testOnDict();
        break;
    case 2: testOnWord();
        break;
    }

    return 0;
}




