#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& copi);
		ClapTrap& operator =(const ClapTrap& copi);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	berepaired(unsigned int amount);
		void	displaystats();
	
	private:

	protected:
		std::string _name;
		int	_hp;
		int _ep;
		int	_attack;

};

#endif