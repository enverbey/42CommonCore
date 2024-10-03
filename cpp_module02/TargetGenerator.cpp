#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator(){}
	
void TargetGenerator::learnTargetType(ATarget* target){
	if (_targetBook.find(target->getType()) == _targetBook.end())
	{
		_targetBook[target->getType()] = target->clone();
	}
}
void TargetGenerator::forgetTargetType(string const & targetName){
	if (_targetBook.find(targetName) != _targetBook.end()){
		_targetBook.erase(_targetBook.find(targetName));
	}
}
ATarget* TargetGenerator::createTarget(string const & targetName){
	ATarget *target = NULL;
	if (_targetBook.find(targetName) != _targetBook.end()){
		target = _targetBook[targetName];}
	return (target);
}