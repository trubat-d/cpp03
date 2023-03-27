#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap& other);
	~ScavTrap();
	ScavTrap&	operator=(const ScavTrap& other);
	void		attack(const std::string& target);
	void		guardGate(void);

protected:
	bool		guard_mode;
};


#endif //CPP_SCAVTRAP_HPP
