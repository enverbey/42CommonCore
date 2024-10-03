#ifndef ATARGET_HPP
# define ATARGET_HPP
#include <iostream>
#include "ASpell.hpp"
using std::cout;
using std::endl;
using std::string;

class ASpell;
class ATarget{
public:
	ATarget(const string& type);
	virtual ~ATarget();

	const string &getType() const;

	virtual ATarget* clone() const = 0;
	void getHitBySpell(const ASpell&) const;

protected:
	string type;
};

#endif