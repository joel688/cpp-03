/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:42:54 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:42:55 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
  protected:
    std::string           Name;
    unsigned int          Hitpoint;
    unsigned int          Energypoint;
    unsigned int          Attackdamage;
  public:
                          ClapTrap(void);
                          ClapTrap(std::string name);
                          ~ClapTrap(void);
                          ClapTrap(const ClapTrap& src);
                          ClapTrap& operator=(const ClapTrap& src);
    void                  SetClapTrapName(std::string name);
    void                  SetClapTrapHitpoint(int amount);
    void                  SetClapTrapEnergypoint(int amount);
    void                  SetClapTrapAttackdamage(int amount);
    const std::string&    GetClapTrapName(void) const;
    const unsigned int&   GetClapTrapHitpoint(void) const;
    const unsigned int&   GetClapTrapEnergypoint(void) const;
    const unsigned int&   GetClapTrapAttackdamage(void) const;
    void                  attack(const std::string& target);
    void                  takeDamage(unsigned int amount);
    void                  beRepaired(unsigned int amount);
};

#endif
