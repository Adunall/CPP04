/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:50:16 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 14:10:04 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* b1 = new Dog();
    Animal* b2 = new Cat();
    int Acount = 7;
    Animal* animals[Acount];

    for (int i = 0; i < (Acount/2); i++)
    {
        animals[i] = new Dog();
    }
     for (int i = (Acount/2); i < Acount; i++)
    {
        animals[i] = new Cat();
    }

    for (int i = 0; i <Acount; i++)
    {
        animals[i]->makeSound();
    }
    std::cout << std::endl;
    
    Dog copy(*(Dog *)animals[4]);

    for (int i = 0; i < 100; ++i)
    {
        std::cout << copy.getBrain()->ideas[i] <<std::endl;
    }
    
    int count = 0;
    while (count < Acount)
    {
        delete animals[count];
        count++;
    }

    delete b1;
    delete b2;
    return 0;
}
