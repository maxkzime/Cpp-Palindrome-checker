// Palindrome/main.cpp
// BODIN Maxime
// 27/01/2022

#include <iostream>
#include <string>
#include "typeDef.h"
#include "functions.h"
using namespace std;

int main()
{
    List* aList = new List;
    bool isPalindrome = false; char stop='N';
    string aWord;

    while(stop=='N'){

        cout << "-Enter a word : " << '\n';
        getline(cin,aWord);

        for(int i=0; i < aWord.length(); i++)
            if(aWord[i] != aWord[aWord.length()-1])
                break;
            else
                isPalindrome = true;

        if(isPalindrome){
            cout << " Is palindrome : " << aWord << '\n';
            if(isValid(aList,aWord)){ cout << " This word is already saved" << '\n';}
            else{putAPalindrome(aList,aWord);}
        }
        else
            cout << " Is not palindrome : " << aWord << '\n';

        printListOfPalindromes(aList);

        cout << "Stop ? 'N' or 'Y' " << '\n';
        cin >> stop;cin.ignore();
    }

    deleteList(aList);

    return 0;
}
