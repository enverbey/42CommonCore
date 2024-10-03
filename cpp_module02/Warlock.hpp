#ifndef WARLOCK_HPP
# define WARLOCK_HPP
#include <iostream>
#include "SpellBook.hpp"
using std::cout;
using std::endl;
using std::string;
using std::map;

class Warlock{
public:
	Warlock(const string&, const string&);
	~Warlock();

	const string& getName() const;
	const string& getTitle() const;

	void setTitle(const string&);

	void introduce() const;

	//ex01
	void learnSpell(ASpell*);
	void forgetSpell(const string spellName);
	void launchSpell(const string spellName, const ATarget& target);

private:
	string name;
	string title;
	SpellBook _spellBook;
};

#endif