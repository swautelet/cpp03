#ifndef DIAMONTRAP_HPP
# define DIAMONTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamonTrap:public ScavTrap, public FragTrap{
	public:
		DiamonTrap(std::string name);
		~DiamonTrap();
		void whoAmI();

	private:
		std::string _name;
		
	protected:

};

#endif