#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap A("Jony");
	ClapTrap B("Samy");
	ClapTrap C(A);

	A.attack("Samy");
	B.takeDamage(A.getAd());

	A.setAd(2);
	A.attack("Samy");
	B.takeDamage(A.getAd());

	B.beRepaired(2);
	B.beRepaired(10);

	for(int i = 0; i < 10; i++)
	{
		A.attack("Samy");
		B.takeDamage(A.getAd());
	}
	return 0;
}