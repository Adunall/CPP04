/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:22:34 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 13:22:36 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal"){
	std::cout << "Animal def constructor called!!" << std::endl;
}

Animal::Animal(std::string type): type(type){
	std::cout << "Animal constructor with arg called!!" << std::endl;
}

Animal::Animal(const Animal &copy){
	*this = copy;
	std::cout << "Animal copy constructor called!!" << std::endl;
}

Animal &Animal::operator=(const Animal &copy){
	std::cout << "Animal assignment operator called!!" << std::endl;
	this->type = copy.type;
	return(*this);
}

Animal::~Animal() {
    std::cout << "Animal destructor called!!" << std::endl;
}

std::string Animal::get_type() const{
	return(type);
}

void Animal::set_type(std::string diffType){
	this->type = diffType;
}

void Animal::makeSound() const{
	std::cout << "general animal sound" << std::endl;
}