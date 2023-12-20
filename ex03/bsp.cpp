/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:57:08 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/19 16:00:43 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed area_triangle(Point& A, Point& B, Point& C)
{
    Fixed area = (A.getX() * (B.getY() - C.getY()) + B.getX() * (C.getY() - A.getY()) + C.getX() * (A.getY() - B.getY())) / 2;
    if (area < 0)
        return (area * -1);
    return (area);
}

int check_point(Point& A, Point& B, Point& C, Point& P)
{
    Fixed aABC = area_triangle(A, B, C);
    Fixed aACP = area_triangle(A, C, P);
    Fixed aABP = area_triangle(A, B, P);
    Fixed aCBP = area_triangle(C, B, P);
    
    std::cout << "aABC " << aABC << "\n";
    std::cout << "aACP " << aACP << "\n";
    std::cout << "aABP " << aABP << "\n";
    std::cout << "aCBP " << aCBP << "\n";
    return (aABC == (aACP + aABP + aCBP));
}