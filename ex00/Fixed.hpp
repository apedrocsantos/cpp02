/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:49 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/12/11 22:44:05 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

class Fixed
{
    int _fixed_point_value;
    static const int _bits = 8;

public:
    Fixed(void);
    Fixed(const Fixed &that);
    Fixed &operator=(const Fixed & that);
    ~Fixed(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif