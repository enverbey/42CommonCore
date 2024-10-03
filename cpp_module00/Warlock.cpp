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