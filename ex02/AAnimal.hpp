/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:03:15 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 15:03:17 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
#include <string>

class AAnimal{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(std::string);
		AAnimal(const AAnimal &);
		AAnimal &operator=(const AAnimal &);
		virtual ~AAnimal();
		std::string get_type() const;
		void set_type(std::string);
		virtual void makeSound() const = 0;
};

#endif
