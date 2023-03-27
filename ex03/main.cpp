#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap A("Jony");
	DiamondTrap B("Samy");
	DiamondTrap C(A);

	C.whoAmI();

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

	A.highFiveGuys();
	B.highFiveGuys();

	A.guardGate();
	A.guardGate();

	A.whoAmI();
	B.whoAmI();
	return 0;
}