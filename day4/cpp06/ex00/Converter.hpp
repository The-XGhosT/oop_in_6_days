/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 01:34:20 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/11 01:43:40 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <climits>
#include <iostream>

#define DOUBLE_MIN  2.22507e-308
#define DOUBLE_MAX  1.79769e+308
#define FLOAT_MIN   1.17549e-38
#define FLOAT_MAX   3.40282e+38

class Converter
{
    private:
        int int1;
        char char1;
        double double1;
        float float1;
            
    public:
        Converter();
        ~Converter();
        Converter(const Converter &rf);
        Converter &operator=(const Converter &rf);

        void DInt();
        void DChar();
        void DFloat();
        void DDouble();

        void IntToO(void);
        void CharToO(void);
        void FloatToO(void);
        void DoubleToO(void);

        void setChar(char c);
        void setInt(int i);
        void setFloat(float f);
        void setDouble(double d);

        int getInt()const;
        char getChar()const;
        float getFloat()const;
        double getDouble()const;

        bool isInt(std::string input)const ;
        bool isChar(std::string input)const ;
        bool isFloat(std::string input)const ;
        bool isDouble(std::string input)const ;
        void handle_input(std::string input);
        void Display(void);
};

#endif