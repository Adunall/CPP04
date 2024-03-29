/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:23:34 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 13:25:46 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal"){
	std::cout << "WrongAnimal def constructor called!!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type){
	std::cout << "WrongAnimal constructor with arg called!!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
	*this = copy;
	std::cout << "WrongAnimal constructor called!!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy){
	this->type = copy.type;
	std::cout << "WrongAnimal assignment operator called!!" << std::endl;
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
	std::cout << "WrongAnimal Sound" << std::endl;
}