#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap:public ScavTrap, public FragTrap{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& copi);
		DiamondTrap& operator =(const DiamondTrap& copi);
		~DiamondTrap();
		void whoAmI();

	private:
		std::string _name;
		
	protected:

};

#endif