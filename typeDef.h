// Palindrome/typeDef.h
// BODIN Maxime
// 27/01/2022

#ifndef TYPEDEF_H
#define TYPEDEF_H

#include <string>
#include <iostream>
#include <fstream>

/*
 * Custom element of a custom list
 */
struct Element
{
    std::string aPalindrome;
    Element * next = nullptr;
};

/*
 * Definition of a custom list
 */
struct List
{
    int size = 0;
    Element * first = nullptr;
};


#endif // TYPEDEF_H
