#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	_name = "NPC";
	_HP = 10;
	_EP = 10;
	_AD = 0;
	std::cout << "ClapTrap " << _name << " has born!!" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	_name = name;
	_HP = 10;
	_EP = 10;
	_AD = 0;
	std::cout << "ClapTrap " << _name << " has born!!" << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _AD << " points of damage!" << std::endl;
}
