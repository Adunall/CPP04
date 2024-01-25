/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:36:32 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 17:01:13 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria {
    public:
        Ice();
        Ice(const Ice& copy);
        Ice &operator=(const Ice& copy);
        std::string const & getType() const;
        Ice *clone() const;
        void use(ICharacter& target);
        ~Ice();
};

#endif
