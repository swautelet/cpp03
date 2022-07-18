#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& copi);
	ScavTrap& operator =(const ScavTrap& copi);
	~ScavTrap();
	void	guardGate();

	private:
};

#endif