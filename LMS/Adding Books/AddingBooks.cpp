#include <iostream>
#include <string>
#include <istream>
#include "../Functions.h"


using namespace std;


void addingBooks()
{

    // initializing new array "library" and storing book in it

    cout << "\nEnter how many books you want to store : ";

    int library_size; // "library" array size

    cin >> library_size; // user enter size here

    string* books = new string[library_size]; // declaring "library" array here

    int books_arr_size = sizeof(books) / sizeof(books[0]);

    string* authorname = new string[library_size]; // declaring "authorname" array here

    for (int i = 0; i < library_size; i++) // initializing "library" array with book names
    {

        cout << "\nEnter " << 1 + i << " book name : "; // console message on terminal

        getline(cin >> ws, books[i]); // user enter book name here

        cout << "\nEnter " << books[i] << " author name : ";

        getline(cin >> ws, authorname[i]); // user enter book author name here

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

        
    }
    else if (option == 2) // if you choose "0" then it will run block of code in else statement
    {

        cout << "\nYou are exiting from library" << endl; // console this message on the screen
    }
    else
    {

        cout << "\nYou have entered wrong option\n"
            << endl;
        cout << "You are exiting from library" << endl;
    }
}