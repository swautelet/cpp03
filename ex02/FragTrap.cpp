#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_attack = 30;
	this->_ep = 100;
	this->_hp = 100;
	std::cout << this->_name << " evolve in FragTrap praise the FragTrap!" << std::endl;
	this->displaystats();
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " is destroyed without having done his high five, NOOOOOOOOO!" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->_name << " try to make a high five with anyone interested!" << std::endl;
}