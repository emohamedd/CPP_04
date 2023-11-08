/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:23:19 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/08 11:24:50 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
    std::cout << "Cure constructor called" << std::endl;
    this->type = "Cure";
}
Cure::Cure(const Cure & src){
    std::cout << "Cure copy constructor called" << std::endl;
    *this = src;
}
Cure& Cure::operator=(const Cure & src){
    std::cout << "Cure assignation operator called" << std::endl;
    this->type = src.type;
    return *this;
}
Cure::~Cure(){
    std::cout << "Cure destructor called" << std::endl;
}
