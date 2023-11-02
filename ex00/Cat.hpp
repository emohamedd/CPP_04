/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:48:21 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/02 11:02:55 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal{
    public:
        Cat();
        Cat(const Cat & src);
        Cat & operator=(const Cat & src);
        ~Cat();
        void makeSound() const;
};  