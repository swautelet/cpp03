#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::string s1("Paul");
	std::string s2("Newbie");
	ClapTrap paul(s1);
	ScavTrap newbie(s2);
	FragTrap lol("Solo");

	paul.attack(s2);
	newbie.takeDamage(0);
	newbie.berepaired(10);
	newbie.berepaired(1);
	newbie.berepaired(1);
	newbie.berepaired(1);
	newbie.berepaired(1);
	newbie.berepaired(1);
	newbie.berepaired(1);
	newbie.berepaired(1);
	newbie.berepaired(1);
	newbie.berepaired(1);
	newbie.berepaired(1);
	newbie.attack();
	paul.takeDamage(20);
	lol.takeDamage(20);
	paul.attack(s2);
	paul.takeDamage(1);
	paul.berepaired(1);
	paul.displaystats();
	newbie.displaystats();
	lol.displaystats();
	lol.highFivesGuys();
	newbie.guardGate();
}