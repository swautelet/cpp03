#include"ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _ep(10), _attack(0)
{
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
	this->displaystats();
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hp > 0)
	{
		if (this->_ep > 0)
		{
			std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack << " damage!" << std::endl;
			this->_ep--;
		}
		else
		{
			std::cout << "ClapTrap " << this->_name << " is too exhausted to attack." << std::endl;
		}
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is dead and can't attack!" << std::endl;
	}
}	

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	this->_hp -= amount;
	if (this->_hp <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " received " << amount << " damage and died!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " received " << amount << " damage!" << std::endl;
	}
}

void	ClapTrap::berepaired(unsigned int amount)
{
	if (this->_hp > 0)
	{
		if (this->_ep > 0)
		{
			std::cout << "ClapTrap " << this->_name << " reapair itself for " << amount << " damage!" << std::endl;
			this->_ep--;
			this->_hp += amount;
		}
		else
		{
			std::cout << "ClapTrap " << this->_name << " is too exhausted to repair itself." << std::endl;
		}
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is dead and can't be repaired!" << std::endl;
	}
}

void	ClapTrap::displaystats()
{
	std::cout << "My name is " << this->_name << " i have " << this->_hp << " hp, " << this->_ep << " ep and " << this->_attack << " attack!" << std::endl;
}