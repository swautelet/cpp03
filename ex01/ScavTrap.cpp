#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):ClapTrap()
{
	std::cout << this->_name << " evolve in ScavTrap!" << std::endl;
	this->_attack = 20;
	this->_ep = 50;
	this->_hp = 100;
	this->displaystats();
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << this->_name << " evolve in ScavTrap!" << std::endl;
	this->_attack = 20;
	this->_ep = 50;
	this->_hp = 100;
	this->displaystats();
}

ScavTrap::ScavTrap(const ScavTrap& copi)
{
	this->_name = copi._name;
	this->_ep = copi._ep;
	this->_hp = copi._hp;
	this->_attack = copi._attack;
	return ;
}

ScavTrap& ScavTrap::operator =(const ScavTrap& copi)
{
	this->_name = copi._name;
	this->_ep = copi._ep;
	this->_hp = copi._hp;
	this->_attack = copi._attack;
	return (*this);
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

void	ScavTrap::attack()
{
	std::cout << "ScavTrap " << this->_name << " attack everything around him for " << this->_attack << " damage!" << std::endl;
}