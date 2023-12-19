/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:43 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/12/09 14:29:18 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
    // std::cout << "Default constructor called\n";
    this->_fixed_point_value = 0;
    return;
}

Fixed::Fixed(int const number) : _fixed_point_value(number * (1 << this->_bits))
{
    // std::cout << "Int constructor called\n";
    return;
}

Fixed::Fixed(float const number) : _fixed_point_value(std::round(number * (1 << this->_bits)))
{
    // std::cout << "Float constructor called\n";
    return;
}

Fixed::Fixed(const Fixed & that)
{
    // std::cout << "Copy constructor called\n";
    *this = that;
    return;
}

Fixed & Fixed::operator=(const Fixed & that)
{
    // std::cout << "Copy assignment operator called\n";
    if (this != &that)
        this->_fixed_point_value = that.getRawBits();
    return (*this);
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called\n";
    return;
}

int Fixed::getRawBits(void) const
{
    return this->_fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed_point_value = raw;
}

float Fixed::toFloat(void) const
{
    return (float(this->_fixed_point_value) / (1 << this->_bits));
}

int Fixed::toInt(void) const
{
    return (this->_fixed_point_value / (1 << this->_bits));
}

bool Fixed::operator>(const Fixed & that)
{
    return (this->getRawBits() > that.getRawBits());
}

bool Fixed::operator<(const Fixed & that)
{
    return (this->getRawBits() < that.getRawBits());
}

bool Fixed::operator>=(const Fixed & that)
{
    return (this->getRawBits() >= that.getRawBits());
}

bool Fixed::operator<=(const Fixed & that)
{
    return (this->getRawBits() <= that.getRawBits());
}

bool Fixed::operator==(const Fixed & that)
{
    return (this->getRawBits() == that.getRawBits());
}

bool Fixed::operator!=(const Fixed & that)
{
    return (this->getRawBits() != that.getRawBits());
}

Fixed Fixed::operator+(const Fixed & that)
{
    return (this->toFloat() + that.toFloat());
}

Fixed Fixed::operator-(const Fixed & that)
{
    return (this->toFloat() - that.toFloat());
}

Fixed Fixed::operator*(const Fixed & that)
{
    return (this->toFloat() * that.toFloat());
}

Fixed Fixed::operator/(const Fixed & that)
{
    return (this->toFloat() / that.toFloat());
}

Fixed & Fixed::operator++(void)
{
    this->_fixed_point_value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->_fixed_point_value++;
    return (temp);
}

Fixed & Fixed::operator--(void)
{
    this->_fixed_point_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->_fixed_point_value--;
    return (temp);
}

Fixed & Fixed::min(Fixed & n1, Fixed & n2)
{
    if (n1.getRawBits() < n2.getRawBits())
        return (n1);
    return (n2);
}

const Fixed & Fixed::min(Fixed const & n1, Fixed const & n2)
{
    if (n1.getRawBits() < n2.getRawBits())
        return (n1);
    return (n2);
}

Fixed & Fixed::max(Fixed & n1, Fixed & n2)
{
    if (n1.getRawBits() > n2.getRawBits())
        return (n1);
    return (n2);
}

const Fixed & Fixed::max(Fixed const & n1, Fixed const & n2)
{
    if (n1.getRawBits() > n2.getRawBits())
        return (n1);
    return (n2);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
    // o.precision(8);
    o << rhs.toFloat();
    return (o);
}