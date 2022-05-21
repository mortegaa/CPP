
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap {
	private:
		std::string	_name;
		unsigned int	_HP;
		unsigned int	_EP;
		unsigned int	_AD;
	public:
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
}

#endif
