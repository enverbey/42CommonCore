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
	_spellBook.learnSpell(spell);
}
void Warlock::forgetSpell(const string spellName){
	_spellBook.forgetSpell(spellName);
}
void Warlock::launchSpell(const string spellName, const ATarget& target){
	if (_spellBook.createSpell(spellName))
		_spellBook.createSpell(spellName)->launch(target);

}