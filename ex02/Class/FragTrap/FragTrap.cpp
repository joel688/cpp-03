#include "./FragTrap.hpp"

// ----------Constructors----------

FragTrap::FragTrap(void)
{
  std::cout << "FragTrap constructed" << std::endl;
  return ;
}

FragTrap::FragTrap(std::string name)
{
  SetFragTrapName(name);
  SetFragTrapHitpoint(100);
  SetFragTrapEnergypoint(100);
  SetFragTrapAttackdamage(30);
  std::cout << "FragTrap " << name << " constructed." << std::endl;
  return ;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
  *this = src;
  return ;
}

// ----------Destructor----------

FragTrap::~FragTrap()
{
  std::cout << "FragTrap " << this->GetFragTrapName() << " destroyed." << std::endl;
  return ;
}

// ----------Setters----------

void                FragTrap::SetFragTrapName(std::string name)
{
  this->Name = name;
  return ;
}

void                FragTrap::SetFragTrapHitpoint(int amount)
{
  this->Hitpoint = amount;
  return ;
}

void                FragTrap::SetFragTrapEnergypoint(int amount)
{
  this->Energypoint = amount;
  return ;
}

void                FragTrap::SetFragTrapAttackdamage(int amount)
{
  this->Attackdamage = amount;
  return ;
}

// ----------Getters----------

const std::string&  FragTrap::GetFragTrapName(void) const
{
  return (this->Name);
}

const unsigned int& FragTrap::GetFragTrapHitpoint(void) const
{
  return (this->Hitpoint);
}

const unsigned int& FragTrap::GetFragTrapAttackdamage(void) const
{
  return (this->Attackdamage);
}

const unsigned int& FragTrap::GetFragTrapEnergypoint(void) const
{
  return (this->Energypoint);
}

// ----------Operators overloaders---------

FragTrap& FragTrap::operator=(const FragTrap& src)
{
  this->Name = src.Name;
  this->Hitpoint = src.Hitpoint;
  this->Energypoint = src.Energypoint;
  this->Attackdamage = src.Attackdamage;
  std::cout << "FragTrap copy done" << std::endl;
  return (*this);
}

// ----------Members Functions----------

void  FragTrap::highFivesGuys(void)
{
  std::cout << "FragTrap " << this->GetFragTrapName() << " high fives guys" << std::endl;
  return ;
}
