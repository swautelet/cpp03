#include "DiamondTrap.hpp"

DiamonTrap::DiamonTrap(std::string name):ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name.append("_clap_name"))
{
	std::cout << this->DiamonTrap::_name << " is born from the fusion of a FragTrap and a ScavTrap long life the DiamonTrap!" << std::endl;
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_attack = FragTrap::_attack;
	this->displaystats();
}

DiamonTrap::~DiamonTrap()
{
	std::cout << this->_name << " is destroyed, the ClapTrap community cry his death!" << std::endl;
}