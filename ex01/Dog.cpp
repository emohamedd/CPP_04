/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:51:05 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/02 11:20:48 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog Constructor Called" << std::endl;
    this->type = "Dog";
}
Dog::Dog(const Dog & src){
    std::cout << "Dog Copy Constructor Called" << std::endl;
    *this = src;
}
Dog & Dog::operator=(const Dog & src){
    std::cout << "Dog Assignment Operator Called" << std::endl;
    this->type = src.type;
    return *this;
}
Dog::~Dog(){
        std::cout << "Destructor Called" << std::endl;    

}

void Dog::makeSound() const{
    std::cout << "3AW 3AW" << std::endl;
}