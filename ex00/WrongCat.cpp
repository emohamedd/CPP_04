/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:13:24 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/21 14:50:02 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat Constructor Called" << std::endl;
    this->type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat & src){
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
    *this = src;
}
WrongCat & WrongCat::operator=(const WrongCat & src){
    std::cout << "WrongCat Assignment Operator Called" << std::endl;
    this->type = src.type;
    return *this;
}
WrongCat::~WrongCat(){
    std::cout << "Destructor Called" << std::endl;    
}

void WrongCat::makeSound() const{

    std::cout << "UWU UWU" << std::endl;
};