#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

using namespace std;

class Author{
	string name, email;
	char gender;
public:
	Author();
	Author(string, string, char);
	string get_author_name();
};


#endif
