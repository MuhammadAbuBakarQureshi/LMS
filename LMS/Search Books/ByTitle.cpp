#include <iostream>
#include <string>
#include <istream>
#include <iomanip>
#include "../Functions.h"

using namespace std;

void byTitle(string* books, string* authorName, bool available[], int* arr_size)
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

                cout << "\n Do you want to lend this book\n"
                    << endl;

                cout << "1. Yes" << endl
                    << "2. No" << endl;

                int lend_option;

                cin >> lend_option;

                int index = i;

                if (lend_option == 1)
                {

                    lend(available, index);
                }
                else if (lend_option == 2)
                {

                    continue;
                }
                else
                {

                    cout << "\n This key is considered as NO\n"
                        << endl;
                    continue;
                }

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
