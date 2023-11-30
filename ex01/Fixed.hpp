/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:49 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/11/30 17:49:57 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
    int _value;
    static const int _bits = 8;
    std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

public:
    Fixed(void);
    Fixed(int const);
    Fixed(float const);
    Fixed(const Fixed &that);
    Fixed & operator=(const Fixed & that);
    float toFloat(void) const;
    int toInt(void) const;
    ~Fixed(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};