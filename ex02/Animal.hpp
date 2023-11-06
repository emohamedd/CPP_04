/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:46:31 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/06 15:15:56 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AAnimal{
  protected:
    std::string type;
  public:
    AAnimal();
    AAnimal(const AAnimal & src);
    AAnimal & operator=(const AAnimal & src);
     ~AAnimal();
    virtual void makeSound() const = 0;
    virtual std::string getType() const = 0;  
      
};
class WrongAnimal{
  protected:
    std::string type;
  public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal & src);
    WrongAnimal & operator=(const WrongAnimal & src);
     ~WrongAnimal();
    void makeSound() const;
    std::string getType() const;  
      
};