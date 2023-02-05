/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyas <ilyas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 00:17:56 by ilyas             #+#    #+#             */
/*   Updated: 2023/02/05 01:24:51 by ilyas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>

std::string ft_cut_firt_occurance(std::string s1, std::string s2, std::string s3, int *flag);
std::string ft_str_replace(std::string s1,std::string s2,std::string s3);
std::string ft_open_a_file(std::string name);
void creat_a_repalce_file(std::string name, std::string content);
#endif