/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:49:15 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/21 15:19:28 by emohamed         ###   ########.fr       */
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
    private:
        Brain *brain;
};  