#include <iostream>
#include <string>
#include <istream>
#include <iomanip>
#include "../Functions.h"

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
