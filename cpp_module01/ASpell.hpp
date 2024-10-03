#ifndef ASPELL_HPP
# define ASPELL_HPP
#include <iostream>
#include "ATarget.hpp"

using std::cout;
using std::endl;
using std::string;

class ATarget;
class ASpell{
public:
	ASpell(const string& name, const string& effects);
	virtual ~ASpell();

	const string &getName() const;
	const string &getEffects() const;

	virtual ASpell* clone() const = 0;
	void launch(const ATarget&) const;
protected:
	string name;
	string effects;
};

#endif