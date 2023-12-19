/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:57:05 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/18 11:26:04 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.cpp"

class Point
{
    Fixed const _x;
    Fixed const _y;

public:
    Point();
    Point (const Fixed x, const Fixed y);
    Point(const Point & that);
    Point & operator=(const Point & that);
    ~Point();
    Fixed getX() const;
    Fixed getY() const;
};