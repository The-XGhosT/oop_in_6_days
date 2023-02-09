/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:53:36 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/09 21:54:43 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain{
    private:
        std::string  ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &copy);
        Brain &operator=(const Brain &rf);
        
};

#endif