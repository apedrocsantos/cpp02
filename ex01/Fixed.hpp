/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:49 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/12/09 14:44:35 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

// Floating point to fixed point conversion: https://www.rfwireless-world.com/calculators/floating-vs-fixed-point-converter.html

class Fixed
{
    int _fixed_point_value;
    static const int _bits = 8;

public:
    Fixed(void);
    Fixed(int const number);
    Fixed(float const number);
    Fixed(const Fixed &that);
    Fixed & operator=(const Fixed & that);
    float toFloat(void) const;
    int toInt(void) const;
    ~Fixed(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif