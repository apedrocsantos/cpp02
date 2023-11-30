/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosantos <pedrosantos@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:43 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/11/29 15:57:29 by pedrosantos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called\n";
    this->_value = 0;
    return;
}

Fixed::Fixed(const Fixed & that)
{
    std::cout << "Copy constructor called\n";
    // std::cout << "this address: " << this << "\n";
    *this = that;
    return;
}

Fixed & Fixed::operator=(const Fixed & that)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &that)
        this->_value = that.getRawBits();
    // std::cout << "this address: " << this << "\n";
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
    return;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return this->_value;
}