/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:57:07 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/19 15:57:59 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
    return;
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y)
{
    // std::cout << "Point constructor called\n";
    std::cout << this->_x << ", " << this->_y << "\n";
    return;
}

Point::Point(const Point & that) : _x(that._x), _y(that._y)
{
    // std::cout << "Point copy constructor called\n";
    return;
}

Point & Point::operator=(const Point & that)
{
    // std::cout << "Point copy assignment operator called\n";
    if (this != &that)
    {
        (Fixed) this->_x = that.getX();
        (Fixed) this->_x = that.getY();
    }
    return (*this);
}

Point::~Point()
{
    // std::cout << "Point destructor called\n";
}

Fixed Point::getX() const
{
    return this->_x;
}

Fixed Point::getY() const
{
    return this->_y;
}