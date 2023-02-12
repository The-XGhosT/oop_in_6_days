/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:27:23 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/12 10:16:17 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

std::string ft_cut_firt_occurance(std::string s1, std::string s2, std::string s3, int *flag)
{
    int index = s2.find(s1);
    if(index < 0)
    {
        *flag = 1;
        return(s2);
    }
    else
      {
          int length = index + s1.length();
          std::string str = s2.substr(0,index) + s3 + s2.substr(length);
          return str ;
      }
}

std::string ft_str_replace(std::string s1,std::string s2,std::string s3)
{
    std::string str; 
    str = s2;
    int flag  = 0;
    while(flag == 0)
    {
        str = ft_cut_firt_occurance(s1,str,s3,&flag);
    } 
     return(str);
}

std::string ft_open_a_file(char *name)
{
    std::fstream file;
    std::string content ;
    std::string str;
    file.open(name,std::ios::in);
    if(file.fail())
    {
        std::cout << "Error";
        return("");
    }
    while(!file.eof())
    {
        getline(file,content);
        if(!file.eof())
            content += "\n";
        str = str + content;
    }
    if (!content.length())
    {std::cout << "empty file !!"; return "";}
    file.close();
    return(str);
}

void creat_a_repalce_file(char *name ,std::string content)
{
    std::fstream nfile;
   
    nfile.open(name, std::ios::out);
    nfile << content;
}