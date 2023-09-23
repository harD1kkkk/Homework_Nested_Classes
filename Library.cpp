#include "Library.h"

void Library::addBook(Book& book) {
    books.push_back(book);
    cout << "Book added to the library." << endl;
}

void Library::removeBook(string name) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].getName() == name) {
            if (books[i].isAvailable()) {
                books.erase(books.begin() + i);
                cout << "Book removed from the library." << endl;
            }
            else {
                cout << "Book is currently checked out and cannot be removed." << endl;
            }
            return;
        }
    }
    cout << "Book not found in the library." << endl;
}

void Library::checkOutBook(string name) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].getName() == name) {
            if (books[i].isAvailable()) {
                books[i].setAvailable(false);
                cout << "Book checked out successfully." << endl;
            }
            else {
                cout << "Book is already checked out." << endl;
            }
            return;
        }
    }
    cout << "Book not found in the library." << endl;
}

void Library::returnBook(string name) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].getName() == name) {
            if (books[i].isAvailable() == false) {
                books[i].setAvailable(true);
                cout << "Book returned successfully." << endl;
            }
            else {
                cout << "Book is already in the library." << endl;
            }
            return;
        }
    }
    cout << "Book not found in the library." << endl;
}

void Library::displayAllBooks() {
    if (books.empty()) {
        cout << "The library is empty." << endl;
    }
    else {
        cout << "Library Contents:" << endl;
        for (int i = 0; i < books.size(); i++) {
            books[i].displayInfo();
        }
    }
}