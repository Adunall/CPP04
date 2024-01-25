/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:26:06 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 13:26:08 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	WrongAnimal::type = "WrongCat";
	std::cout << "WrongCat def constructor called!!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy){
	*this = copy;
	std::cout << "WrongCat copy constructor called!!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy){
	this->type = copy.type;
	std::cout << "WrongCat assignment operator called!!" << std::endl;
	return(*this);
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called!!" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "maaaoww" << std::endl;
}