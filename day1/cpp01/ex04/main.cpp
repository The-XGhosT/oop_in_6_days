/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyas <ilyas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:26:16 by ilyas             #+#    #+#             */
/*   Updated: 2023/02/05 01:37:06 by ilyas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int ac, char **av)
{
    if(ac != 4)
        std::cout "enter a valid "
    else
    {
        std::string str;
        str = ft_open_a_file(av[1]);
        str = ft_str_replace(av[2],str,av[3]);
        creat_a_repalce_file(av[1],str);
    //std::cout << str <<std::endl;
    }
    
}