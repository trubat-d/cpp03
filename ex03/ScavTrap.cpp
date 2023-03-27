#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), guard_mode(false)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name), guard_mode(false)
{
	std::cout << "ScavTrap constructor called for : " << this->_name << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->guard_mode = other.guard_mode;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap "<< this->_name << " destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	this->_hp = other._hp;
	this->_ad = other._ad;
	this->_ep = other._ep;
	this->_name = other._name;
	this->guard_mode = other.guard_mode;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if(this->_ep <  1)
	{
		std::cout << "ScavTrap " << this->_name << " has not enough energy to attack " << target << std::endl;
	}
	else if (this->_hp < 1)
	{
		std::cout << "ScavTrap " << this->_name << " has not hp to attack " << target << std::endl;
	}
	else
	{
		this->_ep--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " , causing " << this->_ad << " points of damage !" << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	if(!this->guard_mode)
	{
		std::cout << "ScavTrap " << this->_name << " has entered in Gate Keeper mode" << std::endl;
		this->guard_mode = true;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is already in Gate Keeper mode" << std::endl;
}