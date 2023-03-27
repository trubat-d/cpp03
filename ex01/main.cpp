#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap A("Jony");
	ScavTrap B("Samy");
	ScavTrap C(A);

	A.attack("Samy");
	B.takeDamage(A.getAd());

	A.setAd(2);
	A.attack("Samy");
	B.takeDamage(A.getAd());

	B.beRepaired(2);
	B.beRepaired(10);

	for(int i = 0; i < 40; i++)
	{
		A.attack("Samy");
		B.takeDamage(A.getAd());
	}

	A.guardGate();
	A.guardGate();
	return 0;
}