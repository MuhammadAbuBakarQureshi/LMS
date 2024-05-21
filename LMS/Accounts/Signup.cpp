#include <iostream>
#include <string>
#include <time.h>


using namespace std;

void signup(int usersIDs[], int size) // changed from string to void
{

    bool isNew = 0;

    int genertedID = 0;

    while (!isNew)
    {

        srand(time(0));

        genertedID = rand() % 1000;

        for (int i = 0; i < size; i++)
        {

            if (usersIDs[i] == genertedID)
            {

                break;
            }

            if (i == size - 1)
            {

                isNew = 1;
            }
        }
    }

    cout << "\nPlease save your id for future use\n"
        << endl;

    cout << "Your id is : " << genertedID << endl;
}
