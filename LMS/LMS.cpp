#include <iostream>
#include <string>
#include <istream>
#include <iomanip>
#include "Functions.h"

using namespace std;

int main()
{

    int usersIDs[] = { 23, 42, 21, 65, 25 };

    int usersIDs_size = end(usersIDs) - begin(usersIDs);

    account(usersIDs, usersIDs_size);

    mainMenu();

    return 0;
}
