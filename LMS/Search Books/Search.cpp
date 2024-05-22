#include <iostream>
#include <string>
#include <istream>
#include <iomanip>
#include "../Functions.h"

using namespace std;

void search(string* books, string* authorName, bool available[], int* arr_size)
{

    string authorname;

    cout << "Do you want to search by author name or book title." << endl;

    cout << "write 1 to search by book title and 2 to search by author name.";

    int ans;

    cin >> ans;

    if (ans == 1)
    {

        byTitle(books, available, arr_size);
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
