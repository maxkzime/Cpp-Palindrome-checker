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
    const int SIZE = 5;
    bool isPalindrome = false;
    string aWord, tab[SIZE];
    getline(cin,aWord);
    
    for(int i=0; i < aWord.length(); i++)
        if(aWord[i] != aWord[aWord.length()-1])
            break;
        else
            isPalindrome = true;

    if(isPalindrome){
         cout << "Is palindrome : " << aWord << '\n';
         if(isValid(aList,aWord))
            
    }
    else
        cout << "Is not palindrome : " << aWord << '\n';

    return 0;
}