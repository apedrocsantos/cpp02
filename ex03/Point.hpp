/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:57:05 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/19 15:58:02 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
#define __POINT_HPP__

#include "Fixed.hpp"

class Point
{
    Fixed const _x;
    Fixed const _y;

public:
    Point() {};
    Point (const Fixed x, const Fixed y);
    Point(const Point & that);
    Point & operator=(const Point & that);
    ~Point();
    Fixed getX() const;
    Fixed getY() const;
};

#endif