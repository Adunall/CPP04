/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:32:18 by adunal            #+#    #+#             */
/*   Updated: 2024/01/25 15:32:20 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain{
    public:
        std::string ideas[100];
        Brain();
        Brain(const Brain &c);
        Brain &operator=(const Brain &);
        virtual ~Brain();
};

#endif