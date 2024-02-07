/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:44:12 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:44:12 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "../ClapTrap/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
                ScavTrap();
                ScavTrap(std::string Name);
                ~ScavTrap();
                ScavTrap(const ScavTrap& src);
    ScavTrap&   operator=(const ScavTrap& src);
    void                  SetScavTrapName(std::string name);
    void                  SetScavTrapHitpoint(int amount);
    void                  SetScavTrapEnergypoint(int amount);
    void                  SetScavTrapAttackdamage(int amount);
    const std::string&    GetScavTrapName(void) const;
    const unsigned int&   GetScavTrapHitpoint(void) const;
    const unsigned int&   GetScavTrapEnergypoint(void) const;
    const unsigned int&   GetScavTrapAttackdamage(void) const;
    void        attack(const std::string& target);
    void        guardGate();
};

#endif
