/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:49:49 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 13:49:50 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	Animal::type = "Cat";
	std::cout << "Cat constructor called!!" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat() {
	delete brain;
    std::cout << "Cat destructor called!!" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "maoowwww" << std::endl;
}
Cat::Cat(const Cat &copy) {
    this->brain = new Brain(*copy.brain); // dc
    this->type = copy.type;
    std::cout << "Cat copy constructor called!!" << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
    if (this != &copy) {
        delete this->brain;
        *this->brain = *copy.brain;
        this->type = copy.type;
    }

    return *this;
}

Brain *Cat::getBrain() const {
	return brain;
}