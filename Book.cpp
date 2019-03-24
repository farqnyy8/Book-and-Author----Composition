#include "Book.h"

Book::Book(): name(""), price(0.0)
{
}

Book::Book(string name, Author author, double price, int quantity): name(name)
{
	this->author = author;
	this->price = price;
	this->quantity = quantity;
}

//accesors
string Book::get_name() const
{
	return this->name;
}

Author Book::get_author() const
{
	return this->author;
}

double Book::get_price() const
{
	return this->price;
}

int Book::get_quantity() const
{
	return this->quantity;
}

string Book::get_author_name() 
{
	return this->author.get_author_name();
}

//mutators
void Book::set_price(double price)
{
	this->price = price;
}

void Book::set_quantity(int quantity) 
{
	this->quantity = quantity;
}

void Book::print()
{
	cout << "\n\nBook Author's Name: " << this->author.get_author_name() << endl;
	cout << "Book Name: " << this->name << endl;
	cout << "Book Quantity: " << this->quantity << endl;
	cout << "Book Price : $" << this->price << endl;
}
