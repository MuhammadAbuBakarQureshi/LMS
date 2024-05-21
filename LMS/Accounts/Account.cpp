#include <iostream>
#include <string>
#include <istream>
#include "../Functions.h"

using namespace std;

void account(int usersIDs[], int userIDs_size) {

    cout << "\nDo you have account\n"
        << endl;

    cout << "1. No" << endl
        << "2. yes" << endl;

    int entryChoice;

    cout << "\nPlease enter your status :";

    cin >> entryChoice;

    if (entryChoice == 1)
    {

        signup(usersIDs, userIDs_size);
    }
    else if (entryChoice == 2)
    {

        bool permission = 0;

        while (!permission)
        {

            permission = login(usersIDs, userIDs_size);
        }
    }
    else
    {

        cout << "\nPlease enter right choice" << endl;

        account(usersIDs, userIDs_size);
    }
}
