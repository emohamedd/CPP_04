/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:19:57 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/06 15:16:59 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

AAnimal::AAnimal(){
    std::cout << "Animal Default Constructor Called" << std::endl;
    this->type = "Animals";  
}

AAnimal::AAnimal(const AAnimal& src){
    std::cout << "Animal Copy Constructor Called" << std::endl;
    *this = src;
}
AAnimal & AAnimal::operator=(const AAnimal & src){
    std::cout << "Animal Assignment Operator Called" << std::endl;
    this->type = src.type;
    return *this;
}
AAnimal::~AAnimal(){
    std::cout << "Animal Destructor Called" << std::endl;
}
