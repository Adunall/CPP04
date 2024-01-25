/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:50:01 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 13:50:03 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	Animal::type = "Dog";
	std::cout << "Dog constructor called!!" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor called!!" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "vuuf vufff" << std::endl;
}

Dog::Dog(const Dog &copy) {
    this->brain = new Brain(*copy.brain); // dc
    this->type = copy.type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
    if (this != &copy) {
        delete this->brain;
        this->brain = new Brain(*copy.brain);
        this->type = copy.type;
    }
    return *this;
}

Brain *Dog::getBrain() const{
	return brain;
}