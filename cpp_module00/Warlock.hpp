#ifndef WARLOCK_HPP
# define WARLOCK_HPP
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Warlock{
	Warlock(const string&, const string&);
	~Warlock();

	const string& getName() const;
	const string& getTitle() const;

	void setTitle(const string&);

	void introduce() const;
private:
	string name;
	string title;
};

#endif