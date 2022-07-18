#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), ScavTrap(), FragTrap(), _name(ClapTrap::_name.append("_clap_name"))
{
	std::cout << this->DiamondTrap::_name << " is born from the fusion of a FragTrap and a ScavTrap long life the DiamonTrap!" << std::endl;
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_attack = FragTrap::_attack;
	this->displaystats();
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name.append("_clap_name"))
{
	std::cout << this->DiamondTrap::_name << " is born from the fusion of a FragTrap and a ScavTrap long life the DiamonTrap!" << std::endl;
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_attack = FragTrap::_attack;
	this->displaystats();
}

DiamondTrap::DiamondTrap(const DiamondTrap& copi)
{
	this->_name = copi._name;
	this->_ep = copi._ep;
	this->_hp = copi._hp;
	this->_attack = copi._attack;
	return ;
}

DiamondTrap& DiamondTrap::operator =(const DiamondTrap& copi)
{
	this->_name = copi._name;
	this->_ep = copi._ep;
	this->_hp = copi._hp;
	this->_attack = copi._attack;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name << " is destroyed, the ClapTrap community cry his death!" << std::endl;
}