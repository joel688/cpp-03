#include "./Class/ClapTrap/ClapTrap.hpp"
#include "./Class/ScavTrap/ScavTrap.hpp"

int main()
{
  ClapTrap a("Joachim");
  ScavTrap b("Richard");

  a.attack("Richard");
  b.takeDamage(10);
  b.guardGate();
  b.attack("Joachim");
  return(0);
}
