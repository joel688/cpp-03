/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:42:31 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:42:32 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
