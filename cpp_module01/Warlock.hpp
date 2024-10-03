#ifndef WARLOCK_HPP
# define WARLOCK_HPP
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
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
	map<string, ASpell*> _spellBook;
};

#endif