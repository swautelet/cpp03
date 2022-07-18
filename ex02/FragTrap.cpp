#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	this->_attack = 30;
	this->_ep = 100;
	this->_hp = 100;
	std::cout << this->_name << " evolve in FragTrap praise the FragTrap!" << std::endl;
	this->displaystats();
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_attack = 30;
	this->_ep = 100;
	this->_hp = 100;
	std::cout << this->_name << " evolve in FragTrap praise the FragTrap!" << std::endl;
	this->displaystats();
}

FragTrap::FragTrap(const FragTrap& copi)
{
	this->_name = copi._name;
	this->_ep = copi._ep;
	this->_hp = copi._hp;
	this->_attack = copi._attack;
	return ;
}

FragTrap& FragTrap::operator =(const FragTrap& copi)
{
	this->_name = copi._name;
	this->_ep = copi._ep;
	this->_hp = copi._hp;
	this->_attack = copi._attack;
	return (*this);
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