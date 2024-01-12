/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:43 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/12/09 10:36:14 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called\n";
    this->_fixed_point_value = 0;
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
        this->_fixed_point_value = that.getRawBits();
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
    return this->_fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    this->_fixed_point_value = raw;
}