#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP
#include <iostream>
#include <map>
#include "ATarget.hpp"

using std::cout;
using std::endl;
using std::string;
using std::map;

class TargetGenerator{
public:
	TargetGenerator();
	~TargetGenerator();
	
	void learnTargetType(ATarget*);
	void forgetTargetType(string const &);
	ATarget* createTarget(string const &);
private:
	map<string, ATarget*> _targetBook;
};

#endif