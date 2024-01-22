#include "./Class/ClapTrap/ClapTrap.hpp"

int main()
{
  ClapTrap a("Joachim");
  ClapTrap b("Richard");
  ClapTrap c("Salah");
  ClapTrap d;

  d = a;
  a.attack("Richard");
  b.attack("Salah");
  b.takeDamage(10);
  b.takeDamage(10);
  b.beRepaired(10);
  return(0);
}
