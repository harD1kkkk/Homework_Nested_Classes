#include "Book.h"
Book::Book(string name, string author, int year) {
    this->name = name;
    this->author = author;
    this->year = year;
}

string Book::getName() {
    return this->name;
}

string Book::getAuthor() {
    return this->author;
}

int Book::getYear() {
    return this->year;
}

bool Book::isAvailable() {
    return this->available;
}

void Book::setAvailable(bool available) {
    this->available = available;
}

void Book::displayInfo() {
    cout << "Name: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
    cout << "Status: ";
    if (available) {
        cout << "Available";
    }
    else {
        cout << "Checked Out";
    }
    cout << endl;
    cout << "-----------------------------" << endl;
}