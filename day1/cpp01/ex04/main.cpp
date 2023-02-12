/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:27:41 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 09:48:19 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int ac, char **av)
{
    if(ac != 4)
        std::cout << "enter a valid ";
    else
    {
        std::string str;
        str = ft_open_a_file(av[1]);
        str = ft_str_replace(av[2],str,av[3]);
        creat_a_repalce_file(av[1],str);
    }
    
}