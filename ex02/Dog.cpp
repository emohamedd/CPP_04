/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:51:05 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/21 16:12:52 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog Constructor Called" << std::endl;
    this->brain = new Brain();
    this->type = "Dog";
}
Dog::Dog(const Dog & src){
    std::cout << "Dog Copy Constructor Called" << std::endl;
    *this = src;
}
Dog & Dog::operator=(const Dog & src){
    std::cout << "Dog Assignment Operator Called" << std::endl;
    this->type = src.type;
    delete this->brain;
    this->brain = new Brain();
     int i = 0;
    while (i < 100)
    {
         this->brain[i] = src.brain[i];
         i++;
    }
    return *this;
}
Dog::~Dog(){
        std::cout << "Destructor Called" << std::endl;
        delete this->brain;    

}

void Dog::makeSound() const{
    std::cout << "3AW 3AW" << std::endl;
}
