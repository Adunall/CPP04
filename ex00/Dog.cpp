/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:23:03 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 13:23:04 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	Animal::type = "Dog";
	std::cout << "Dog def constructor called!!" << std::endl;
}

Dog::Dog(const Dog &copy){
	*this = copy;
	std::cout << "Dog copy constructor called!!" << std::endl;
}

Dog &Dog::operator=(const Dog &copy){
	this->type = copy.type;
	std::cout << "Dog assignment operator called!!" << std::endl;
	return(*this);
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "vufff vuf" << std::endl;
}