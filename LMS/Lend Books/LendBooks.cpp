#include <iostream>
#include <string>
#include <istream>
#include <iomanip>

using namespace std;

void lend(bool* available, string* books, int index)
{

    cout << "\n\n\"" << books[index] << "\" Book is mark as lend " << endl;
    
    available[index] = false;
}
