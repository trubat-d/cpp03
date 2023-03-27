#include "FragTrap.hpp"

int main(void)
{
	FragTrap A("Jony");
	FragTrap B("Samy");
	FragTrap C(A);

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
	return 0;
}