// Palindrome/typeDef.h
// BODIN Maxime
// 27/01/2022

#ifndef TYPEDEF_H
#define TYPEDEF_H

#include <iostream> 
#include <string>
using namespace std;

/*
 * Element of a list
 */
struct Element
{
    string aPalindrome;
    Element * next = nullptr;
};

/*
 * Definition of a list
 */
struct List
{
    int size = 0;
    Element * first = nullptr;
};


#endif // TYPEDEF_H
