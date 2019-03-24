#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include "Author.h"

class Book{
	
	Author author;
	string name;
	double price;
	int quantity;
	//static int total_quantity;
	
public:
	//constructors
	Book();
	Book(string, Author, double, int);
	
	//accesors
	string get_name() const;
	Author get_author() const;
	double get_price() const;
	int get_quantity() const;
	string get_author_name();
	
	//mutators
	void set_price(double);
	void set_quantity(int);
	void print();
	
};

#endif
