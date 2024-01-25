/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:50:40 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 17:53:28 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	WrongAnimal::type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy){
	*this = copy;
	std::cout << "WrongCat copy constructor called!!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy){
	this->type = copy.type;
	return(*this);
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called!!" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "maaaowww" << std::endl;
}