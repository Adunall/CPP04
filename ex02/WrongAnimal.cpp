/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:33:11 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 15:56:06 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal"){
	std::cout << "WrongAnimal constructor called!!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type){
	std::cout << "WrongAnimal constructor called!!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
	*this = copy;
	std::cout << "WrongAnimal constructor called!!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy){
	this->type = copy.type;
	return(*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called!!" << std::endl;
}

std::string WrongAnimal::get_type() const{
	return(type);
}

void WrongAnimal::set_type(std::string diffType){
	this->type = diffType;
}

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal General Sound" << std::endl;
}