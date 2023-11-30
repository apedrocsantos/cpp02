/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosantos <pedrosantos@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:49 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/11/29 15:46:02 by pedrosantos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
    int _value;
    static const int _bits = 8;

public:
    Fixed(void);
    Fixed(const Fixed &that);
    Fixed &operator=(const Fixed & that);
    ~Fixed(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};