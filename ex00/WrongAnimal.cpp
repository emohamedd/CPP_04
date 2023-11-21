/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:12:52 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/21 14:50:07 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal Default Constructor Called" << std::endl;
    this->type = "WrongAnimals";  
}

WrongAnimal::WrongAnimal(const WrongAnimal& src){
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
    *this = src;
}
WrongAnimal & WrongAnimal::operator=(const WrongAnimal & src){
    std::cout << "WrongAnimal Assignment Operator Called" << std::endl;
    this->type = src.type;
    return *this;
}
WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}
void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const{
    return (this->type);
}