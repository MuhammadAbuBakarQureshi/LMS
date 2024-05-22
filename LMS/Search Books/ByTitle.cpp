#include <iostream>
#include <string>
#include <istream>
#include <iomanip>

using namespace std;

void byTitle(string* books, bool available[], int* arr_size)
{

    string book;

    cout << "enter the title of book : ";

    getline(cin >> ws, book);

    for (int i = 0; i < *arr_size; i++)
    {

        if (book == books[i])
        {

            if (available[i])
            {

                cout << "yes " << book << " is currently available";

                break;
            }
            else
            {

                cout << "sorry " << book << " is borrowed by someone else";

                break;
            }
        }

        if (i == *arr_size - 1)

        {

            cout << "sorry " << book << " is not available in the books";
        }
    }
}
