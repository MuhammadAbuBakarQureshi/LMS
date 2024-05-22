#include <iostream>
#include <string>
#include <istream>
#include <iomanip>
#include "Functions.h"

using namespace std;

int main()
{
   
    string books[50] = { "Rich Dad Poor Dad", "Think and Grow Rich", "You Can Heal Your Life",
                    "The Art of Happiness", "The Subtle Art of Not Giving a F*ck", "Atomic Habits",
                    "Meditations", "Man's Search for Meaning", "The Hitchhiker's Guide to the Galaxy",
        // Add 10 more books here
        "Pride and Prejudice", "To Kill a Mockingbird", "The Lord of the Rings",
        "The Catcher in the Rye", "One Hundred Years of Solitude",
        "The Great Gatsby", "Invisible Man", "Beloved", "Jane Eyre",
        "Frankenstein" };

    string authorName[50] = { "Robert Kiyosaki", "Napoleon Hill", "Louise Hay",
                             "Dalai Lama", "Mark Manson", "James Clear",
                             "Marcus Aurelius", "Viktor Frankl", "Douglas Adams",
        // Add 10 more authors here
        "Jane Austen", "Harper Lee", "J. R. R. Tolkien",
        "J. D. Salinger", "Gabriel García Márquez",
        "F. Scott Fitzgerald", "Ralph Ellison", "Toni Morrison",
        "Charlotte Brontë", "Mary Shelley" };

    bool available[50] = { true, false, true, true, true, false, false, false, false, true, true, false, true, true, true, false, false, false, false };

    // int books_arr_size = end(books) - begin(books);

    int usersIDs[] = { 23, 42, 21, 65, 25 };

    int usersIDs_size = end(usersIDs) - begin(usersIDs);

    int books_arr_size = 19;

    int total_arr_size = 19;

    account(usersIDs, usersIDs_size);

    mainMenu(books, authorName, available, &books_arr_size, &total_arr_size);

    return 0;
}
