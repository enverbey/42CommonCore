#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
using std::cout;
using std::endl;
using std::string;
using std::map;

class SpellBook{
public:
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell*);
	void forgetSpell(string const &);
	ASpell* createSpell(string const &);
private:
	map<string, ASpell*> _spellBook;
};

#endif