#include "ClapTrap.hpp"

int main()
{
	std::string s1("Paul");
	std::string s2("Newbie");
	ClapTrap paul(s1);
	ClapTrap newbie(s2);

	paul.attack(s2);
	newbie.takeDamage(0);
	newbie.berepaired(10);
	paul.takeDamage(10);
	paul.attack(s2);
}