/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:10:44 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/05 15:05:57 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *animal = new Animal[10];
    int i = 0;
    while(i < 5)
    {
        animal[i] = Cat();
        
        i++;
    }
    while(i < 10)
    {
        animal[i] = Dog();
        i++;
    }
    i = 0;
    while(i < 10)
    {
        std::cout << animal[i].getType() << std::endl; 
        i++;
    }
}