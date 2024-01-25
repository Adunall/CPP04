/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:22:48 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 13:22:50 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	Animal::type = "Cat";
	std::cout << "Cat def constructor called!!" << std::endl;
}

Cat::Cat(const Cat &copy){
	*this = copy;
	std::cout << "Cat copy constructor called!!" << std::endl;
}

Cat &Cat::operator=(const Cat &copy){
	this->type = copy.type;
	std::cout << "Cat assignment operator called!!" << std::endl;
	return(*this);
}

Cat::~Cat() {
    std::cout << "Cat destructor called!!" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "maaaowww" << std::endl;
}