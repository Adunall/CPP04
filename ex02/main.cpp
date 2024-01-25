/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:33:00 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 15:33:02 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    AAnimal* b1 = new Cat();
    AAnimal* b2 = new Cat();
    Cat *b = dynamic_cast<Cat*>(b1);
    std::cout << b->getBrain()->ideas[1] <<std::endl;
    b->getBrain()->ideas[1] = "God Leave";
    Cat a = *b;
    std::cout << a.getBrain()->ideas[1] <<std::endl;
    delete b1;
    delete b2;
    return 0;
}
