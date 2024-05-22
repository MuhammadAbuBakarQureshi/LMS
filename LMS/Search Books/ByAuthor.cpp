#include <iostream>
#include <string>
#include <istream>
#include <iomanip>

using namespace std;

void byAuthor(string* books, string* authorName, bool available[], int* arr_size)
{

    string authorname;

    cout << "enter the title of author name : ";

    getline(cin >> ws, authorname);

    for (int i = 0; i < *arr_size; i++)
    {
        if (authorname == authorName[i])
        {
            if (available[i])
            {
                cout << "yes " << books[i] << " written by " << authorname << " is currently available";
                break;
            }
            else
            {
                cout << "sorry " << books[i] << " written by " << authorname << " is borrowed by someone else";
                break;
            }
        }

        if (i == *arr_size - 1)

        {
            cout << "sorry there is no book written by " << authorname << " available in the books";
        }
    }
}
