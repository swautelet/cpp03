#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap{
	public:
		ClapTrap(std::string name);
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