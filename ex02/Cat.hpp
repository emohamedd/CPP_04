/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:48:21 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/06 15:15:33 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public AAnimal{
    public:
        Cat();
        Cat(const Cat & src);
        Cat & operator=(const Cat & src);
        ~Cat();
        void makeSound() const;
        void setter(Brain *new_brain);
    private:
        Brain *brain;
};

class WrongCat : public WrongAnimal{
    public:
        WrongCat();
        WrongCat(const WrongCat & src);
        WrongCat & operator=(const WrongCat & src);
        ~WrongCat();
        void makeSound() const;
};  