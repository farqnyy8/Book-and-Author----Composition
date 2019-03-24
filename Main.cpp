//Main.cpp
#include "Book.h"

Book get_book();
Author get_author();

int main()
{
	Book book1;
	
	book1 = get_book();
	
	book1.print();
	
	return 0;
}

//get_author
Author get_author()
{
	string name, email;
	char gender;
	
	cout << "Enter Book's Author Name: ";
	getline(cin, name);
	
	cout << "Enter Book's Author Email: ";
	getline(cin, email);
	
	cout << "Enter Book's 'Author Gender (M:male, F:female or O:other): ";
	cin>>gender;
	cin.ignore();
	
	Author author(name, email, gender);
	
	return author;
}

//get book
Book get_book()
{
	Author author;
	author = get_author();
	string name;
	double price;
	int quantity;
	
	cout << "Enter Book's' Name: ";
	getline(cin, name);
	
	cout << "Enter Quantity of Book: ";
	cin>>quantity;
	
	cout << "Enter Book's price: $";
	cin>>price;
	
	Book new_book(name, author, price, quantity);
	
	return new_book;
}
