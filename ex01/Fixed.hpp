/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:49 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/12/07 23:30:57 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed
{
    int _value;
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