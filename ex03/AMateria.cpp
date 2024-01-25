/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:35:36 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 17:01:44 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): type(type){
    std::cout << "AMateria constructor called!! " << type << " created" << std::endl;
}

AMateria::~AMateria(){
    std::cout << "AMateria destructor called!!" << std::endl;
}

AMateria::AMateria(const AMateria &copy): type(copy.getType()){
    std::cout << "AMateria copy constructor called!!" << std::endl;
}

std::string const & AMateria::getType() const {
    return (this->type);
}

AMateria &AMateria::operator=(const AMateria& copy) {
    (void)copy;
    return *this;
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria used on " << target.getName() << std::endl;
}
