/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 08:56:51 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 08:56:53 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << &str<<std::endl;
    std::cout << stringPTR <<std::endl;
    std::cout << &stringREF <<std::endl;

    std::cout << str <<std::endl;
    std::cout << *stringPTR <<std::endl;
    std::cout << stringREF <<std::endl;

}