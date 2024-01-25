/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:03:07 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 15:03:08 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): type("AAnimal"){
	std::cout << "AAnimal def constructor called!!" << std::endl;
}

AAnimal::AAnimal(std::string type): type(type){
	std::cout << "AAnimal constructor with arg called!!" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy){
	*this = copy;
	std::cout << "AAnimal constructor called!!" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &copy){
	this->type = copy.type;
	return(*this);
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called!!" << std::endl;
}

std::string AAnimal::get_type() const{
	return(type);
}

void AAnimal::set_type(std::string diffType){
	this->type = diffType;
}
