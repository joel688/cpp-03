/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:43:07 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:43:08 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

// ----------Constructors----------

ScavTrap::ScavTrap(void)
{
  std::cout << "ScavTrap constructed" << std::endl;
  return ;
}

ScavTrap::ScavTrap(std::string name)
{
  SetScavTrapName(name);
  SetScavTrapHitpoint(100);
  SetScavTrapEnergypoint(50);
  SetScavTrapAttackdamage(20);
  std::cout << "ScavTrap " << name << " constructed." << std::endl;
  return ;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
  *this = src;
  return ;
}

// ----------Destructor----------

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap " << this->GetScavTrapName() << " destroyed." << std::endl;
  return ;
}

// ----------Setters----------

void                ScavTrap::SetScavTrapName(std::string name)
{
  this->Name = name;
  return ;
}

void                ScavTrap::SetScavTrapHitpoint(int amount)
{
  this->Hitpoint = amount;
  return ;
}

void                ScavTrap::SetScavTrapEnergypoint(int amount)
{
  this->Energypoint = amount;
  return ;
}

void                ScavTrap::SetScavTrapAttackdamage(int amount)
{
  this->Attackdamage = amount;
  return ;
}

// ----------Getters----------

const std::string&  ScavTrap::GetScavTrapName(void) const
{
  return (this->Name);
}

const unsigned int& ScavTrap::GetScavTrapHitpoint(void) const
{
  return (this->Hitpoint);
}

const unsigned int& ScavTrap::GetScavTrapAttackdamage(void) const
{
  return (this->Attackdamage);
}

const unsigned int& ScavTrap::GetScavTrapEnergypoint(void) const
{
  return (this->Energypoint);
}

// ----------Operators overloaders---------

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
  this->Name = src.Name;
  this->Hitpoint = src.Hitpoint;
  this->Energypoint = src.Energypoint;
  this->Attackdamage = src.Attackdamage;
  std::cout << "ScavTrap copy done" << std::endl;
  return (*this);
}

// ----------Members Functions----------

void  ScavTrap::attack(const std::string& target)
{
  if(this->GetScavTrapEnergypoint() > 0)
  {
    std::cout << "ScavTrap " << this->GetScavTrapName() << " attack " << target << ", causing " << this->GetScavTrapAttackdamage() << " points of damage!" << std::endl;
    this->SetScavTrapEnergypoint(this->GetScavTrapEnergypoint() - 1);
  }
  else
    std::cout << "ScavTrap " << this->GetScavTrapName() << " has no Energypoint left." << std::endl; 
  return ;
}

void  ScavTrap::guardGate(void)
{
  std::cout << "Scavtrap " << this->GetScavTrapName() << " have enterred in Gate keeper mode" << std::endl;
  return ;
}
