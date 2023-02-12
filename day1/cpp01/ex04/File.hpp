/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:27:31 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 09:46:43 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>
#include<unistd.h>

std::string ft_cut_firt_occurance(std::string s1, std::string s2, std::string s3, int *flag);
std::string ft_str_replace(std::string s1,std::string s2,std::string s3);
std::string ft_open_a_file(char *name);
void creat_a_repalce_file(char *name, std::string content);
#endif