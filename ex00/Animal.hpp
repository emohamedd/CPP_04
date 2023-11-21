/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:46:31 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/21 14:52:37 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal{
  protected:
    std::string type;
  public:
    Animal();
    Animal(const Animal & src);
    Animal & operator=(const Animal & src);
    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;  
      
};
