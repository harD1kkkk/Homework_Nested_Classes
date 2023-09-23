#pragma once
#include <iostream>
using namespace std;

class Book
{
private:
	string name;
	string author;
	int year;
	bool available;
public:
	Book(string name, string author, int year);

	string getName();
	string getAuthor();
	int getYear();
	bool isAvailable();
	void setAvailable(bool available);

	void displayInfo();
};