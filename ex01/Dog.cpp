/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:51:05 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/08 11:10:19 by emohamed         ###   ########.fr       */
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
    this->brain = new Brain();
    *this = src;
}
Dog & Dog::operator=(const Dog & src){
    std::cout << "Dog Assignment Operator Called" << std::endl;
    this->type = src.type;
    return *this;
}
Dog::~Dog(){
        std::cout << "Destructor Called" << std::endl;
        delete this->brain;    

}

void Dog::makeSound() const{
    std::cout << "3AW 3AW" << std::endl;
}
