#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "NoName DiamondTrap has been created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name), FragTrap(name), ScavTrap(name), _name(name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_ad = FragTrap::_ad;
	std::cout << "DiamondTrap constructor called for : " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other._name), FragTrap(other._name), ScavTrap(other._name)
{
	this->_name = other._name;
	ClapTrap::_name = other._name + "_clap_name";
	std::cout << "DiamondTrap copy constructor called for : " << this->_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called for : " << this->_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	this->_name = other._name;
	this->_ad = other._ad;
	this->_ep = other._ep;
	this->_hp = other._hp;
	this->guard_mode = other.guard_mode;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Diamond trap with name : " << this->_name << " which is also a ClapTrap named  : " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}