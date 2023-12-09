/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:49 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/12/09 14:44:08 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
    int _fixed_point_value;
    static const int _bits = 8;

public:
    Fixed(void);
    Fixed(int const number);
    Fixed(float const number);
    Fixed(const Fixed &that);
    bool operator>(const Fixed & that);
    bool operator<(const Fixed & that);
    bool operator>=(const Fixed & that);
    bool operator<=(const Fixed & that);
    bool operator==(const Fixed & that);
    bool operator!=(const Fixed & that);
    Fixed & operator=(const Fixed & that);
    Fixed operator+(const Fixed & that);
    Fixed operator-(const Fixed & that);
    Fixed operator*(const Fixed & that);
    Fixed operator/(const Fixed & that);
    Fixed & operator++(void);
    Fixed operator++(int);
    Fixed & operator--(void);
    Fixed operator--(int);
    static Fixed & min(Fixed & n1, Fixed & n2);
    static const Fixed & min(Fixed const & n1, Fixed const & n2);
    static Fixed & max(Fixed & n1, Fixed & n2);
    static const Fixed & max(Fixed const & n1, Fixed const & n2);
    float toFloat(void) const;
    int toInt(void) const;
    ~Fixed(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif