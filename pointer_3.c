/*
Program to show the use of a pointer as an argument to a function for updating a variable
defined in the main function.
-----------------------------
In this example, total number of available books is updated after new books come in donation.
The number of donated books is fed by the user and the program updates the total number of
books by calling a function.
*/

#include <stdio.h>

// function protoype
void updateBooksCount(int, int *);

// main function
int main()
{
    int donated_books = 0;
    int total_books = 0;

    // pointer to total books
    int *ptotal_books;           // pointer decleration
    ptotal_books = &total_books; // assignment

    for (int i = 0; i < 5; i++) // five iterations
    {
        // prompt user to input the number of books
        printf("Enter the number of books donates: ");
        scanf("%d", &donated_books);

        // call the function to update books count
        updateBooksCount(donated_books, ptotal_books);

        // total number of books
        printf("Total books collected as of now: %d\n", total_books);
    }
}

// function defintion
// (Important: variable names are same but variables are different)
void updateBooksCount(int donated_books, int *ptotal_books)
{
    int temp = *ptotal_books; // dereferencing pointer
    temp = temp + donated_books;
    *ptotal_books = temp; // updating the value stored at location pointed by pointer ptotal_books
}