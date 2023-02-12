/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:48:00 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/11 01:46:07 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int ac ,char **av)
{
    if(ac == 2)
    {
        Converter c;
        c.handle_input(av[1]);
    }
    else
        std::cout << "invalid args" << std::endl;
}

