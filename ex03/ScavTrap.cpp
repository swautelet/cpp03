#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << this->_name << " evolve in ScavTrap!" << std::endl;
	this->_attack = 20;
	this->_ep = 50;
	this->_hp = 100;
	this->displaystats();
}

ScavTrap::~ScavTrap()
{
	std::cout << "Oh no " << this->_name <<" is destroyed what a lose for the Claptrap world" << std::endl;
	return ;
}

void	ScavTrap::guardGate()
{
	std::cout << this->_name << " pased in mode Gate keeper." << std::endl;
}