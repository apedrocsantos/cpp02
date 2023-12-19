/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:57:07 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/17 19:57:08 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y)
{
    std::cout << "Point default constructor called\n";
    return;
}

Point::Point(const Point & that) : _x(that._x), _y(that._y)
{
    std::cout << "Point constructor called\n";
    return;
}

Point & Point::operator=(const Point & that)
{
    if (this != &that)
    {
        (Fixed) this->_x = that.getX();
        (Fixed) this->_x = that.getY();
    }
}

Point::~Point()
{
    std::cout << "Point destructor called\n";
}

Fixed Point::getX() const
{
    return this->_x;
}
