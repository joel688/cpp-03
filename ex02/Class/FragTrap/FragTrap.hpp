/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:43:56 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:43:57 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "../ClapTrap/ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
                          FragTrap();
                          FragTrap(std::string Name);
                          ~FragTrap();
                          FragTrap(const FragTrap& src);
    FragTrap&             operator=(const FragTrap& src);
    void                  SetFragTrapName(std::string name);
    void                  SetFragTrapHitpoint(int amount);
    void                  SetFragTrapEnergypoint(int amount);
    void                  SetFragTrapAttackdamage(int amount);
    const std::string&    GetFragTrapName(void) const;
    const unsigned int&   GetFragTrapHitpoint(void) const;
    const unsigned int&   GetFragTrapEnergypoint(void) const;
    const unsigned int&   GetFragTrapAttackdamage(void) const;
    void                  highFivesGuys(void);
};

#endif
