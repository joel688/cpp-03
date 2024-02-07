/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:41:57 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/07 14:41:59 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
