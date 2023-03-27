#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string const name);
	ClapTrap(std::string const name, int hp, int ep, int ad);
	ClapTrap(const ClapTrap& other);
	~ClapTrap();
	ClapTrap&	operator=(const ClapTrap& other);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	int			getAd(void) const;
	void		setAd(int amount);

protected:
	std::string _name;
	int			_hp;
	int			_ep;
	int			_ad;
};


#endif //CPP_CLAPTRAP_HPP
