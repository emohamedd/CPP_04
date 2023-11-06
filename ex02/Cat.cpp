/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:53:20 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/05 14:39:59 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat Constructor Called" << std::endl;
    this->brain = new Brain();
    this->type = "Cat";
}
Cat::Cat(const Cat & src){
    std::cout << "Cat Copy Constructor Called" << std::endl;
    *this = src;
}
Cat & Cat::operator=(const Cat & src){
    std::cout << "Cat Assignment Operator Called" << std::endl;
    this->type = src.type;
    return *this;
}
Cat::~Cat(){
    std::cout << "Destructor Called" << std::endl;  
     delete this->brain;    
}

void Cat::makeSound() const{

    std::cout << "UWU UWU" << std::endl;
};