
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {

	private:
		std::string	_name;
		unsigned int	_HP;
		unsigned int	_EP;
		unsigned int	_AD;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap & Cl);
		~ClapTrap();
		ClapTrap operator=(ClapTrap & Cl);
		std::string	getName( void );
		unsigned int getHP( void );
		unsigned int getEP( void );
		unsigned int getAD( void );
		void	setName(std::string name);
		void	setHP(unsigned int amount);
		void	setEP(unsigned int amount);
		void	setAD(unsigned int amount);
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
