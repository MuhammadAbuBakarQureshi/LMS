#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void listBooks(string* books, string* authorname, int* books_arr_size, int* total_arr_size)
{

    cout << "\n\n" << setfill('-') << setw(85) << "" << setfill(' ') << endl;

    cout << left << setw(10) << "Sr.no" << left << setw(50) << "Book Title" << "Book Author" << endl;

    cout << setfill('-') << setw(85) << "" << setfill(' ') << endl;

    for (int i = 0; i < *total_arr_size; i++)
    {
        int z = i + 1;

        cout << right << setw(3) << left << setw(10) << z << left << setw(50) << books[i] << setw(40) << authorname[i] << endl;

        cout << endl;
    }
}
