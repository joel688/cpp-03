#include "./ClapTrap.hpp"

// ----------Constructors---------

                    ClapTrap::ClapTrap(void)
{
  std::cout << "ClapTrap constructed" << std::endl;
  return ;
}

                    ClapTrap::ClapTrap(std::string name)
{
  SetClapTrapName(name);
  SetClapTrapHitpoint(10);
  SetClapTrapEnergypoint(10);
  SetClapTrapAttackdamage(0);
  std::cout << "ClapTrap " << name << " constructed" << std::endl;
  return ;
}

                    ClapTrap::ClapTrap(const ClapTrap& src)
{
  *this = src;
  std::cout << "ClapTrap" << this->Name << " copied" << std::endl;
  return ;
}

// ----------Destructors----------

                    ClapTrap::~ClapTrap(void)
{
  std::cout << "ClapTrap " << this->GetClapTrapName() << " destroyed." << std::endl;
  return ;
}

// ----------Setters----------

void                ClapTrap::SetClapTrapName(std::string name)
{
  this->Name = name;
  return ;
}

void                ClapTrap::SetClapTrapHitpoint(int amount)
{
  this->Hitpoint = amount;
  return ;
}

void                ClapTrap::SetClapTrapEnergypoint(int amount)
{
  this->Energypoint = amount;
  return ;
}

void                ClapTrap::SetClapTrapAttackdamage(int amount)
{
  this->Attackdamage = amount;
  return ;
}
// ----------Getters----------

const std::string&  ClapTrap::GetClapTrapName(void) const
{
  return (this->Name);
}

const unsigned int& ClapTrap::GetClapTrapHitpoint(void) const
{
  return (this->Hitpoint);
}

const unsigned int& ClapTrap::GetClapTrapAttackdamage(void) const
{
  return (this->Attackdamage);
}

const unsigned int& ClapTrap::GetClapTrapEnergypoint(void) const
{
  return (this->Energypoint);
}

// ----------Operators overloaders----------

ClapTrap&           ClapTrap::operator=(const ClapTrap& src)
{
  this->Name = src.Name;
  this->Hitpoint = src.Hitpoint;
  this->Energypoint = src.Energypoint;
  this->Attackdamage = src.Attackdamage;
  std::cout << "ClapTrap copy done" << std::endl;
  return (*this);
}

// ----------Members Functions----------

void                ClapTrap::attack(const std::string& target)
{
  if(this->GetClapTrapEnergypoint() > 0)
  {
    std::cout << "ClapTrap " << this->GetClapTrapName() << " attack " << target << ", causing " << this->GetClapTrapAttackdamage() << " points of damage!" << std::endl;
    this->SetClapTrapEnergypoint(this->Energypoint--);
  }
  else
    std::cout << "ClapTrap " << this->GetClapTrapName() << " has no Energypoint left." << std::endl;
  return ;
}

void                ClapTrap::takeDamage(unsigned int amount)
{
  if(this->GetClapTrapHitpoint() > 0)
  {
    std::cout << "ClapTrap " <<this-> GetClapTrapName() << " take " << amount << " point(s) of damage." << std::endl;
    this->SetClapTrapHitpoint(this->Hitpoint - amount);
  }
  else
    std::cout << "ClapTrap " << this->GetClapTrapName() << " has no Hitpoint left." << std::endl;
  return ;
}

void  ClapTrap::beRepaired(unsigned int amount)
{
  if(this->GetClapTrapEnergypoint() < 0)
  {
    std::cout << "ClapTrap " << this->GetClapTrapName() << " be repaired by " << amount << " point(s)." << std::endl;
    this->SetClapTrapHitpoint(this->Hitpoint + amount);
  }
  else
    std::cout << "ClapTrap " << this->GetClapTrapName() << " has no Energypoint left." << std::endl;
  return ;
}
