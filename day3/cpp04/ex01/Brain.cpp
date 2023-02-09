/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:54:48 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/09 21:56:15 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++){
        this->ideas[i] = copy.ideas[i];
    }
}
Brain &Brain::operator=(const Brain &rf)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++){
        this->ideas[i] = rf.ideas[i];
    }
    return *this;
}