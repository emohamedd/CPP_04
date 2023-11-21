/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:19:57 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/21 15:37:02 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

AAnimal::AAnimal(){
    std::cout << "AAnimal Default Constructor Called" << std::endl;
    this->type = "AAnimals";  
}

AAnimal::AAnimal(const AAnimal& src){
    std::cout << "AAnimal Copy Constructor Called" << std::endl;
    *this = src;
}

AAnimal & AAnimal::operator=(const AAnimal & src){
    std::cout << "AAnimal Assignment Operator Called" << std::endl;
    this->type = src.type;
    return *this;
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal Destructor Called" << std::endl;
}

std::string AAnimal::getType() const{
    return (this->type);
}
