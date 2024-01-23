#include "./Class/ClapTrap/ClapTrap.hpp"
#include "./Class/ScavTrap/ScavTrap.hpp"
#include "./Class/FragTrap/FragTrap.hpp"

int main()
{
  ClapTrap a("Joachim");
  ScavTrap b("Richard");
  FragTrap c("Salah");

  a.attack("Richard");
  b.takeDamage(10);
  b.guardGate();
  b.attack("Joachim");
  c.highFivesGuys();
  return(0);
}
