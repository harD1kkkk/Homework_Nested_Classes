// zavd_85.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Book.h"
#include "Library.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    Library library;

    while (true) {
        cout << "Library Menu:" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Remove Book" << endl;
        cout << "3. Check Out Book" << endl;
        cout << "4. Return Book" << endl;
        cout << "5. Display All Books" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        if (choice == 1) {
            string name, author;
            int year;
            cout << "Enter book name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter author: ";
            getline(cin, author);

            cout << "Enter publication year: ";
            cin >> year;

            Book newBook(name, author, year);
            library.addBook(newBook);
            cout << endl;
        }
        else if (choice == 2) {
            string name;
            cout << "Enter book name to remove: ";
            cin.ignore();
            getline(cin, name);

            library.removeBook(name);
            cout << endl;
        }
        else if (choice == 3) {
            string name;
            cout << "Enter book name to check out: ";
            cin.ignore();
            getline(cin, name);

            library.checkOutBook(name);
            cout << endl;
        }
        else if (choice == 4) {
            string name;
            cout << "Enter book name to return: ";
            cin.ignore();
            getline(cin, name);

            library.returnBook(name);
            cout << endl;
        }
        else if (choice == 5) {
            library.displayAllBooks();
            cout << endl;
        }
        else if (choice == 6) {
            cout << "Exiting the program." << endl;
            return 0;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}