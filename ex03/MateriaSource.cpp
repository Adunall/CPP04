/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:37:15 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 17:51:49 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() {
    std::cout << "MateriaSource constructer called!!" << std::endl;
    for (int i = 0; i < 4; i++) {
        this->inventory[i] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& copy) {
    for (int i = 0; i < 4; i++) {
        this->inventory[i] = copy.inventory[i];
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i])
            delete this->inventory[i];
    }
    std::cout << "MateriaSource destructed!!" <<std::endl;
}

void MateriaSource::learnMateria(AMateria* m) {
    int i = 0;
	if(!m){
		std::cout << "Sorry, materia is empty" << std::endl;
		return;
	}
	while(i < 4)
	{
		if(inventory[i] == 0)
        {
			this->inventory[i] = m;
            return;
        }
		i++;
	}
	std::cout << "Sorry, equip slot is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i]->getType() == type)
            return this->inventory[i]->clone();
    }
    return NULL;
}
