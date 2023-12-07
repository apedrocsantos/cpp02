/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:43 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/12/07 22:31:23 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called\n";
    this->_value = 0;
    return;
}

Fixed::Fixed(int const number) : _value(number * (1 << this->_bits))
{
    std::cout << "Int constructor called\n";
    return;
}

Fixed::Fixed(float const number) : _value(std::round(number * (1 << this->_bits)))
{
    std::cout << "Float constructor called\n";
    return;
}

Fixed::Fixed(const Fixed & that)
{
    std::cout << "Copy constructor called\n";
    *this = that;
    return;
}

Fixed & Fixed::operator=(const Fixed & that)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &that)
        this->_value = that.getRawBits();
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
    return;
}

int Fixed::getRawBits(void) const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
    return (float(this->_value) / (1 << this->_bits));
}

int Fixed::toInt(void) const
{
    return (this->_value / (1 << this->_bits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
    o << rhs.toFloat();
    return (o);
}