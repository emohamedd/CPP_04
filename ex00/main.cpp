/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:10:44 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/08 10:39:17 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const WrongAnimal* test =  new WrongAnimal();
    const WrongAnimal* test2 =  new WrongCat();
    std::cout << std::endl;
    std::cout << "\n" << "The animals is :" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << "\n" << "The animals sound :" << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << "\n" << "The animals Wrong sound : " << std::endl;
    test->makeSound();
    test2->makeSound();
    delete meta;
    delete j;
    delete i;
    return 0;
}