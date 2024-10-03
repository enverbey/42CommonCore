#include "ATarget.hpp"

ATarget::ATarget(const string& type){
	this->type = type;
}
ATarget::~ATarget(){}

const string &ATarget::getType() const{return type;}

void ATarget::getHitBySpell(const ASpell& spell) const{
	cout << type << " has been " << spell.getEffects() << "!" << endl;
}