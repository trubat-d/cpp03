#ifndef CPP_DIAMONDTRAP_HPP
#define CPP_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap(const std::string name);
	~DiamondTrap();
	DiamondTrap&	operator=(const DiamondTrap& other);
	void			whoAmI();
	void			attack(const std::string& target);
private:
	std::string		_name;
};


#endif //CPP_DIAMONDTRAP_HPP
