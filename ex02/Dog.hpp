/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:49:15 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/06 15:15:37 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public AAnimal{
    public:
        Dog();
        Dog(const Dog & src);
        Dog & operator=(const Dog & src);
        ~Dog();
        void makeSound() const;
         void setter(Brain *new_brain);
    private:
        Brain *brain;
        
        
};  