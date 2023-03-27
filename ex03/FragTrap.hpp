#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap& other);
	~FragTrap();
	FragTrap&	operator=(const FragTrap& other);
	void		highFiveGuys(void);

};


#endif //CPP_FRAGTRAP_HPP
