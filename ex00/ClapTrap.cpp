#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hp(0), _ep(0), _ad(0)
{
	std::cout << "NoName ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap constructor called for : " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "ClapTrap copy constructor called for : " << this->_name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for : " << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment called !" << std::endl;
	this->_name = other._name;
	this->_ad = other._ad;
	this->_ep = other._ep;
	this->_hp = other._hp;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if(this->_ep <  1)
	{
		std::cout << "ClapTrap " << this->_name << " has not enough energy to attack " << target << std::endl;
	}
	else if (this->_hp < 1)
	{
		std::cout << "ClapTrap " << this->_name << " has not hp to attack " << target << std::endl;
	}
	else
	{
		this->_ep--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " , causing " << this->_ad << " points of damage !" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_ep <  1)
	{
		std::cout << "ClapTrap " << this->_name << " has not enough energy to repair " << std::endl;
	}
	else if (this->_hp < 1)
	{
		std::cout << "ClapTrap " << this->_name << " has not enough hp to repair " << std::endl;
	}
	else if (this->_hp + amount > 10)
	{
		std::cout << "ClapTrap " << this->_name << " has already maximum hp" << std::endl;
	}
	else
	{
		this->_ep--;
		this->_hp += amount;
		std::cout << "ClapTrap " <<this->_name << " repairs " << amount << " hp "  << "and is now at " << this->_hp << " hp !" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead, you are really beating a small dead claptrap on the ground !" << std::endl;
	}
	else
	{
		this->_hp -= amount;
		if(this->_hp < 0)
			this->_hp = 0;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage and is now at : " << this->_hp << " hp !" << std::endl;
	}
}

int ClapTrap::getAd() const
{
	return (this->_ad);
}

void ClapTrap::setAd(int amount)
{
	this->_ad = amount;
}