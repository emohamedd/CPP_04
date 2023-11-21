/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:10:44 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/21 15:57:05 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
//     const AAnimal* meta = new AAnimal();
//     const AAnimal* j = new Dog();
//     const AAnimal* i = new Cat();

//     std::cout << std::endl;
//     std::cout << "\n" << "The animals is :" << std::endl;
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     std::cout << "\n" << "The animals sound :" << std::endl;
//     i->makeSound();
//     j->makeSound();
//     meta->makeSound();
//     delete meta;
//     delete j;
//     delete i;
//     return 0;
// }

int main()
{
    AAnimal* j = new Dog();
    AAnimal* i = new Cat();

    std::cout << std::endl;
    std::cout << "\n" << "The animals are :" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << "\n" << "The animals' sounds :" << std::endl;
    i->makeSound();
    j->makeSound();

    delete j;
    delete i;

    return 0;
}