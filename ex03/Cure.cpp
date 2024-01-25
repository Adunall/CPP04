/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:36:14 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 17:32:59 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
    std::cout << "Cure constructor called!!" << std::endl;
}

Cure::Cure(const Cure& copy) {
    *this = copy;
}
Cure &Cure::operator=(const Cure &copy){
	this->type = copy.getType();
	return *this;
}
std::string const & Cure::getType() const {
    return (this->type);
}
Cure *Cure::clone() const{
	return(new Cure());
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " <<  target.getName() << "\'s wounds *" << std::endl;
}

Cure::~Cure() {
    std::cout << "Cure destructor called!!" << std::endl;
}
