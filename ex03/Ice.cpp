/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:19:58 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/08 11:24:59 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
    std::cout << "Ice constructor called" << std::endl;
    this->type = "ice";
}

Ice::Ice(const Ice & src){
    std::cout << "Ice copy constructor called" << std::endl;
    *this = src;
}

Ice& Ice::operator=(const Ice & src){
    std::cout << "Ice assignation operator called" << std::endl;
    this->type = src.type;
    return *this;
}
Ice::Ice(){
    std::cout << "Ice destructor called" << std::endl;
}



