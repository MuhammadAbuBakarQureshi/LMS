#include <iostream>
#include <string>
#include <istream>
#include <iomanip>
#include "../Functions.h"

using namespace std;

void search(string* books, string* authorName, bool available[], int* arr_size)
{

    cout << "\n\n" << setfill('-') << setw(85) << "" << setfill(' ') << endl;

    string authorname;

    cout << "\n\nDo you want to search by author name or book title.\n" << endl;

    cout << "1. Search by Book Title" << endl 
        << "2. Search by Author Name" << endl;

    int ans;

    cin >> ans;

    if (ans == 1)
    {

        byTitle(books, authorName, available, arr_size);
    }

    else if (ans == 2)
    {

        byAuthor(books, authorName, available, arr_size);
    }
    else
    {

        cout << "You have entered wrong choice" << endl;

        search(books, authorName, available, arr_size);
    }
}
