/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:51 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/12/17 19:45:24 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

// https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/ (formula)
// https://reallysketch.com/app/ (draw triangle)

struct s_point {
    Fixed x, y;
};

Fixed area_triangle(Point A, Point B, Point C)
{
    Fixed area = (A.getX() * (B.getY() - C.getY()) + B.getX() * (C.getY() - A.getY()) + C.getX() * (A.getY() - B.getY())) / 2;
    if (area < 0)
        return (area * -1);
    return (area);
}

int check_point(Point A, Point B, Point C, Point P)
{
    Fixed aABC;
    Fixed aACP;
    Fixed aABP;
    Fixed aCBP;
    aABC = area_triangle(A, B, C);
    aACP = area_triangle(A, C, P);
    aABP = area_triangle(A, B, P);
    aCBP = area_triangle(C, B, P);
    std::cout << "aABC " << aABC << "\n";
    std::cout << "aACP " << aACP << "\n";
    std::cout << "aABP " << aABP << "\n";
    std::cout << "aCBP " << aCBP << "\n";
    return (aABC == (aACP + aABP + aCBP));
}

int main(void)
{
    Point A(5,2);
    Point B(3,5);
    Point C(7,5);
    Point P(5,2);
    
    if (check_point(A, B, C, P))
        std::cout << "Point is inside triangle\n";
    else
        std::cout << "Point is outside triangle\n";
    return 0;
}

// 445C-BGHZ-GELQ-RNYW-JYAG
