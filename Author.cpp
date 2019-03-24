#include "Author.h"

Author::Author()
{
	this->name = "";
	this->email = "";
	this->gender = ' ';
}

Author::Author(string name, string email, char gender)
{
	this->name = name;
	this->email = email;
	this->gender = gender;	
}

string Author::get_author_name()
{
	return this->name;
}
