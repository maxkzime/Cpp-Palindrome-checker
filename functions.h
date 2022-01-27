// Palindrome/functions.h
// BODIN Maxime
// 27/01/2022

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "typeDef.h"
#include <iostream> 
#include <string>
using namespace std;


/*
 * Inserts a new element at the top of a list (stack), above its current top element.
 * param: a list
 * param: an element
 */
void push(List* aList, Element* anElement);

/*
 * Removes the element on top of a list (stack), effectively reducing its size
 * by one.
 * param: a list
 */
void pop(List * aList);

/*
 * A given list is extended by inserting a new element before the element with
 * an equal or greater value. This effectively increases the list size by one.
 * param: a list
 * parma: an element
 */
void insert(List * aList, Element* anElement);

/*
 * Print the list of saved palindromes
 * param: a list (list)
 */
void printListOfPalindromes(const List* aList);

/*
 * Delete a list. Free the memory occupied by each element
 */
void deleteList(List * aList);

/*
 * Put a palindrome on the stack.
 * param: a list (stack)
 * param: a word
 */
void putAPalindrome(List * aList, const string aWord);

/*
 * Check if a word is already in the stack
 * param: a list (list)
 * param: a word
 * return: true if the word is already in the stack
 * var: valid boolean
 */
bool isValid(const List * aList, const string aWord);



#endif // FUNCTIONS_H
