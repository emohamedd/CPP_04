/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:19:57 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/02 11:20:45 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Default Constructor Called" << std::endl;
    this->type = "Animals";  
}

Animal::Animal(const Animal& src){
    std::cout << "Animal Copy Constructor Called" << std::endl;
    *this = src;
}
Animal & Animal::operator=(const Animal & src){
    std::cout << "Animal Assignment Operator Called" << std::endl;
    this->type = src.type;
    return *this;
}
Animal::~Animal(){
    std::cout << "Animal Destructor Called" << std::endl;
}
void Animal::makeSound() const{
    std::cout << "Animal Sound" << std::endl;
}

std::string Animal::getType() const{
    return (this->type);
}
