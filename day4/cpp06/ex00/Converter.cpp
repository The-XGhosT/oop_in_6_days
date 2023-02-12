/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 01:34:17 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/11 02:11:10 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

//destructor and copy constructors
Converter::Converter():int1(0),char1('\0'),float1(0.0f),double1(0.0){}
Converter::Converter(const Converter &copy){ *this = copy;}
Converter::~Converter(){}
//getters
int Converter::getInt()const { return this->int1;}
char Converter::getChar()const { return this->char1;}
float Converter::getFloat()const { return this->float1;}
double Converter::getDouble()const { return this->double1;}
//setters  
void Converter::setInt(int i){this->int1 = i;}
void Converter::setChar(char c){this->char1 = c;}
void Converter::setFloat(float f){this->float1 = f;}
void Converter::setDouble(double d){this->double1 = d;}

//operator = 
Converter &Converter::operator=(const Converter &rf)
{
    if(this != &rf)
    {
        this->int1 = rf.getInt();
        this->char1 = rf.getChar();
        this->float1 = rf.getFloat();
        this->double1 = rf.getDouble();
    }
    return *this;
}

//----------------------------------------

void Converter::CharToO(void)
{
	this->int1 = static_cast<int>(this->getChar());
	this->float1 = static_cast<float>(this->getChar());
	this->double1 = static_cast<double>(this->getChar());
}

void Converter::IntToO(void)
{
	this->char1 = static_cast<unsigned char>(this->getInt());
	this->float1 = static_cast<float>(this->getInt());
    this->double1 = static_cast<double>(this->getInt());

}

void Converter::FloatToO(void)
{
	this->double1 = static_cast<double>(this->getFloat());
	this->char1 = static_cast<char>(this->getFloat());
	this->int1 = static_cast<int>(this->getFloat());
}

void Converter::DoubleToO(void)
{
	this->char1 = static_cast<char>(this->getDouble());
	this->int1 = static_cast<int>(this->getDouble());
	this->float1 = static_cast<float>(this->getDouble());
}


//----------------------------------------

void Converter::DChar()
{
    
           
    if(this->getChar() <= 127 && this->getChar() > 0)//ascii
    {
        if(this->getChar() >= 32 && this->getChar() != 127) //printable
        {
            std::cout << "char     :  "<<this->getChar()<<std::endl;}
        else //not printable
        {std::cout  << "char     :  None displayable" <<std::endl;}
    }
    else//not ascii
    {std::cout << "char    :  impossible" << std::endl;}
}

void Converter::DFloat()
{
    int checker = this->getFloat();
    if(checker -  this->getFloat() == 0)
        std::cout << "Float    :  "<< this->getFloat() << ".0f" <<std::endl;
    else
        std::cout << "Float    :  "<< this->getFloat() << "f" <<std::endl;
}
void Converter::DDouble()
{
    int checker = this->getDouble();
    if(checker -  this->getDouble() == 0)
        std::cout << "Double   :  "<< this->getDouble() << ".0" <<std::endl;
    else
        std::cout << "Double   :  "<< this->getDouble() <<std::endl;
        
}

void Converter::DInt()
{
    std::cout << "Int      :  "<< this->getInt() <<std::endl;

}

void Converter::Display(void)
{
    //display
    DChar();
    DInt();
    DFloat();
    DDouble();
}

//----------------------------------------

bool    Converter::isChar( std::string input ) const
{
    if(input.length() == 1 && std::isalpha( input[0] ) && std::isprint( input[0] ))
        return true;
    return false;
}

bool    Converter::isInt(std::string input) const {
    int    i = 0;
    if ( input[i] == '-' || input[i] == '+' )
        i++;
    for ( int j( i ); j < ( int ) input.length(); j++ ) {
        if ( !std::isdigit( input[j] ) )
            return false;
    }
    if (std::stol(input) < INT_MIN || std::stol(input)> INT_MAX)
        return (false);
    return true;
}

bool    Converter::isFloat(std::string input)const
{
    int i = 0;
    int count = 0;
    if ( input[i] == '-' || input[i] == '+' )
        i++;
    while (input[i] && isdigit(input[i]))
        i++;
    if (input[i] != '.')
           return false;
    i++;
    while (input[i] && isdigit(input[i]))
        i++;
    if(input[i] == 'f' || input[i] == 'F')
        i++;
    if(input[i])
        return false;
    if(count >= 2)
        return false;
     if (std::stol(input) < FLOAT_MIN || std::stol(input)> FLOAT_MAX)
        return (false);
    return (true);
}

bool    Converter::isDouble(std::string input)const
{
    int i = 0;
    int count = 0;
    if ( input[i] == '-' || input[i] == '+' )
        i++;
    while (input[i] && isdigit(input[i]))
        i++;
    if (input[i] != '.')
        return false;
    i++;
    while (input[i] && isdigit(input[i]))
        i++;
    if(input[i])
        return false;
    if (std::stol(input) < DOUBLE_MIN || std::stol(input)> DOUBLE_MAX)
        return (false);
    return (true);
}

//----------------------------------------

void Converter::handle_input(std::string input)
{
    if(input.compare("nan") == 0 || input.compare("nanf") == 0 \
    || input.compare("+inf") == 0 || input.compare("+inff") == 0 \
    || input.compare("-inf") == 0 || input.compare("-inff") == 0 )
    {
        std::cout << "char  :  impossible" << std::endl;
        std::cout << "int   :  impossible" << std::endl;
        if((input.compare("nan") == 0 && input.length() == 3 )|| (input.compare("+inf") == 0 && input.length() == 4 )|| (input.compare("-inf") == 0 && input.length() == 4))
            std::cout << "float :  " << input + 'f' << std::endl;
        else
            std::cout << "float :  " << input << std::endl;
        if((input.compare("nanf") == 0 && input.length() == 4)|| (input.compare("+inff") == 0 && input.length() == 5)|| (input.compare("-inff") == 0 && input.length() == 5))
            input.pop_back();
        std::cout << "double:  " << input<< std::endl;
    }
    else 
    {
        if(isChar(input) == true)
        {
            setChar(input[0]);
            CharToO();
            Display();

        }
        if(isInt(input) == true)
        {
            setInt(std::stoi(input));
            IntToO();
            Display();

        }
        if(isDouble(input) == true)
        {
            setDouble(std::stod(input));
            DoubleToO();
            Display();
        }
        if(isFloat(input) == true)
        {
            setFloat(std::stof(input));
            FloatToO();
            Display();

        }          

    }
}
