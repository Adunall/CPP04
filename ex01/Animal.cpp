/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:49:14 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 13:49:16 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal"){
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type){
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy){
	*this = copy;
	std::cout << "Animal constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy){
	this->type = copy.type;
	return(*this);
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::get_type() const{
	return(type);
}

void Animal::set_type(std::string diffType){
	this->type = diffType;
}

void Animal::makeSound() const{
	std::cout << "No animal sounds" << std::endl;
}