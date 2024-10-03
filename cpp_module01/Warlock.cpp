#include "Warlock.hpp"

Warlock::Warlock(const string& name, const string& title){
	this->name = name;
	this->title = title;
	cout << name << ": This looks like another boring day." << endl;

}
Warlock::~Warlock(){
	cout << name << ": My job here is done!" << endl;
}

const string& Warlock::getName() const{return name;}
const string& Warlock::getTitle() const{return title;}

void Warlock::setTitle(const string& title){this->title = title;}

void Warlock::introduce() const{
	cout << name << ": I am " << name << ", " << title << "!" << endl;
}

//ex01
void Warlock::learnSpell(ASpell* spell){
	if (_spellBook.find(spell->getName()) == _spellBook.end())
	{
		_spellBook[spell->getName()] = spell->clone();
	}
}
void Warlock::forgetSpell(const string spellName){
	if (_spellBook.find(spellName) != _spellBook.end())
	{
		_spellBook.erase(_spellBook.find(spellName));
	}
}
void Warlock::launchSpell(const string spellName, const ATarget& target){
	if (_spellBook.find(spellName) != _spellBook.end()){
		_spellBook[spellName]->launch(target);
	}
}