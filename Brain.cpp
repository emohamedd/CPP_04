/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:37:50 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/04 21:51:40 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor called" << std::endl;
}
Brain::Brain(const Brain & src){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}
Brain::Brain & operator=(const Brain & src){
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &src)
        this->ideas = src.ideas;
    return (*this);
}
Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}
