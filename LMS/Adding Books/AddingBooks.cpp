#include <iostream>
#include <string>
#include <istream>
#include <iomanip>
#include "../Functions.h"


using namespace std;

void addingBooks(string* books, string* authorname, bool* availbale, int* books_arr_size, int* total_arr_size)
{

    cout << "\n\n" << setfill('-') << setw(85) << "" << setfill(' ') << endl;

    // initializing new array "books" and storing book in it

    cout << "\nEnter how many books you want to store : ";

    int books_add; // "books" array size

    cin >> books_add; // user enter size here

    *total_arr_size = *books_arr_size + books_add;

    for (int i = *books_arr_size; i < *total_arr_size; i++) // initializing "books" array with book names
    {

        cout << "\nEnter " << 1 + i << " book name : "; // console message on terminal

        getline(cin >> ws, books[i]); // user enter book name here

        cout << "\nEnter \"" << books[i] << "\" author name : ";

        getline(cin >> ws, authorname[i]); // user enter book author name here

        availbale[i] = true;

        cout << endl;
    }

    cout << "\nDo you want to see collection\n"
        << endl; // console message on terminal

    cout << "1. Yes" << endl // if you don't want to see the cooks you have enter please enter "0"
        << "2. No" << endl; // if you want to see the books you have enter "1"

    int option;

    cin >> option;

    if (option == 1) // if you choose "1" then it will run block of code in if statement
    {

        listBooks(books, authorname, books_arr_size, total_arr_size);
    }
    else if (option == 2) // if you choose "0" then it will run block of code in else statement
    {

        cout << "\nYou are exiting from books" << endl; // console this message on the screen
    }
    else
    {

        cout << "\nYou have entered wrong option\n"
            << endl;
        cout << "You are exiting from books" << endl;
    }
}
