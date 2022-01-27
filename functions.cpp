// Palindrome/functions.cpp
// BODIN Maxime
// 27/01/2022

#include <iostream> 
#include <string>
#include "typeDef.h"
#include "functions.h"
using namespace std;


/*
 * Sum of the letter in ascii to sort the palindromes.
 * param: a word
 */
int wordScore(const string aWord)
{
    
}

/*
 * Inserts a new element at the top of a list (stack), above its current top element.
 * param: a list
 * param: an element
 */
void push(List* aList, Element* anElement)
{
    if(aList->first == nullptr)
        aList->first = anElement;
    else
    {
        anElement->next = aList->first;
        aList->first = anElement;
    }
    aList->size++;
}


/*
 * Removes the element on top of a list (stack), effectively reducing its size
 * by one.
 * param: a list
 */
void pop(List * aList)
{
    if(aList->first == nullptr)
        cout << "EMPTY LIST" << '\n';
    else
    {
        aList->first = aList->first->next;
        aList->size--;
    }
}


/*
 * A given list is extended by inserting a new element before the element with
 * an equal or greater value. This effectively increases the list size by one.
 * param: a list
 * parma: an element
 */
void insert(List * aList, int wordScore)
{

    
    if(aList->first == nullptr || anElement->value <= aList->first->value) // liste vide placement en premier + premier > element
        push(aList, anElement);

    else
    {
        // bool pour optimiser le parcours de la liste
        bool found = false;

        Element* element;// pointeur pour parcourir la liste
        for(element=aList->first;!found && element != nullptr; element = element->next) //parcours de la liste
        {
            if(anElement->value > element->value && element->next == nullptr && !found) // dernier élément dans la liste < élément à placer
            {
                element->next = anElement; // placement en dernier
                found=true;
            }
            else if(anElement->value <= element->next->value && !found) // élément dans la liste < élément à placer < élément suivant dans la liste
            {
                anElement->next = element->next; // placement entre deux éléments
                element->next = anElement;
                found=true;
            }
        }
        aList->size++; // incrémentation de la taille comme on ajoute une valeur à la liste
    }
}


/*
 * Print the list of saved palindromes
 * param: a list (list)
 */
void printListOfPalindromes(const List* aList)
{
    Element * elt;
    for(elt = aList->first; elt != nullptr; elt = elt->next)
       cout << elt << '\n';

    cout << '\n' << " List size : " << aList->size  << '\n';
}


/*
 * Delete a list. Free the memory occupied by each element
 */
void deleteList(List * aList)
{
    Element * anElement,* toDel;
    anElement = aList->first;

    if (anElement->next != nullptr)
    {
        while(anElement->next != nullptr)
        {
            toDel = anElement;
            anElement = anElement->next;
            delete toDel;
        }
    }
    else
        delete anElement;
}

/*
 * Put a palindrome on the stack.
 * param: a list (stack)
 * param: a word
 */
void putAPalindrome(List * aList, const string aWord)
{
    Element* elt = new Element;
    elt->aPalindrome = aWord;
    push(aList,elt);
}


/*
 * Check if a word is already in the stack
 * param: a list (list)
 * param: a word
 * return: true if the word is already in the stack
 * var: valid boolean
 */
bool isValid(const List * aList, const string aWord)
{
    bool valid = false;

    Element * elt;
    for (elt = aList->first; elt != nullptr && !valid; elt = elt->next)
        if(elt->aPalindrome == aWord)
            valid = true;

    return valid;
}







