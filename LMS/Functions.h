#pragma once
#include <string>
#include <string.h>

using namespace std;

// LMS

//// Accounts

	void account(int usersIDs[], int userIDs_size);

	bool login(int usersIDs[], int size);

	void signup(int usersIDs[], int size);

//// Adding Books

	void addingBooks(string* books, string* authorname, bool* availbale, int* books_arr_size, int* total_arr_size);

//// List Books

	void listBooks(string* books, string* authorname, int* books_arr_size, int* total_arr_size);

//// Main Menu

	void mainMenu(string* books, string* authorname, bool* available, int* books_arr_size, int* total_arr_size);

//// Search Books

	void search(string* books, string* authorName, bool available[], int* arr_size);

	void byTitle(string* books, string* authorName, bool available[], int* arr_size);

	void byAuthor(string* books, string* authorName, bool available[], int* arr_size);

//// Lend Books

	void lend(bool* available, string* books, int index);