#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "NoName FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap " << this->_name << " copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap" << this->_name << " destructor called" << std::endl;

}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->_name = other._name;
	this->_ad = other._ad;
	this->_ep = other._ep;
	this->_hp = other._hp;
	return (*this);
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is asking for a High Five !"<< std::endl;
}