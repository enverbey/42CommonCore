#include "SpellBook.hpp"

SpellBook::SpellBook(){}
SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell* spell){
	if (_spellBook.find(spell->getName()) == _spellBook.end())
	{
		_spellBook[spell->getName()] = spell->clone();
	}
}
void SpellBook::forgetSpell(string const &spellName){
	if (_spellBook.find(spellName) != _spellBook.end())
	{
		_spellBook.erase(_spellBook.find(spellName));
	}
}
ASpell* SpellBook::createSpell(string const &spellName){
	ASpell* spell = NULL;
	if (_spellBook.find(spellName) != _spellBook.end())
		spell = _spellBook[spellName];
	return (spell);
}