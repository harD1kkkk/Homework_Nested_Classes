#pragma once
#include <vector>
#include "Book.h"

class Library 
{
private:
	vector<Book> books;
public:
    void addBook(Book& book);
    void removeBook(string name);
    void checkOutBook(string name);
    void returnBook(string name);
    void displayAllBooks();
};