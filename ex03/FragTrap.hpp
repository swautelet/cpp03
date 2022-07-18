#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& copi);
		FragTrap& operator =(const FragTrap& copi);
		~FragTrap();
		void	highFivesGuys();
};

#endif