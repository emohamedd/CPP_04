/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:46:31 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/21 15:37:08 by emohamed         ###   ########.fr       */
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
    virtual ~AAnimal();
    virtual void makeSound() const = 0;
    std::string getType() const ;  
};
