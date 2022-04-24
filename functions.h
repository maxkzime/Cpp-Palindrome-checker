// Palindrome/functions.h
// BODIN Maxime
// 27/01/2022

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "typeDef.h"

/*
 * Inserts a new element at the top of a custom list (stack),
 * above its current top element.
 * param: a list
 * param: an element
 */
void push(List* aList, Element* anElement);

/*
 * Removes the element on top of a custom list (stack),
 * effectively reducing its size by one.
 * param: a list
 */
void pop(List * aList);

/*
 * A given list is extended by inserting a new element before the element with
 * an equal or greater value. We sort the palindromes by alphebetical order.
 * This effectively increases the list size by one.
 * param: a list
 * param: an element
 */
 void insert(List * aList, Element* elemt);

 /*
  * Print the values of a custom list (list all the saved palindromes)
  * param: a custom list
  */
void printListOfPalindromes(const List* aList);

/*
 * Delete a custom list. Free the memory occupied by each element
 */
void deleteList(List * aList);

/*
 * Put a palindrome on the custom stack.
 * param: a list (stack)
 * param: a word
 */
void putAPalindrome(List * aList, const std::string aWord);

/*
 * Check if a word is already in the stack
 * param: a list (list)
 * param: a word
 * return: true if the word is already in the stack
 * var: valid boolean
 */
bool isAlreadySaved(const List * aList, const std::string aWord);

/*
 * Test if a word is a palindrome.
 */
bool isPalindrome(const std::string aWord);

/*
 * Test all the words in a file, if they are palindromes, we print them.
 */
void testOnDict();

/*
 * Test an input from the user, if it's a palindromes,
 * we print it and add it in a custom list if it's not already in it,
 * at the end of the program, we print the custom list.
 */
void testOnWord();


#endif // FUNCTIONS_H
