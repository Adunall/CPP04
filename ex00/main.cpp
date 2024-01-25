/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:23:17 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 13:23:19 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->get_type() << " ";
        j->makeSound();
        std::cout << i->get_type() << " ";
        i->makeSound(); 
        meta->makeSound();
        
        delete meta;
        delete j;
        delete i;
    }
    {
        std::cout << "**********************Testing****************************" << std::endl;
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* cat = new WrongCat();

        std::cout << meta->get_type() << " ";
        cat->makeSound();
        std::cout << cat->get_type() << " ";
        meta->makeSound();
        delete meta;
        delete cat;            
    }
    return 0;
}