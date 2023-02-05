/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyas <ilyas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:26:16 by ilyas             #+#    #+#             */
/*   Updated: 2023/02/05 01:14:21 by ilyas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int ac, char **av)
{
    std::string str;
    str = ft_open_a_file(av[1]);
    str = ft_str_replace(av[2],str,av[3]);
    std::cout << str <<std::endl;
    
}