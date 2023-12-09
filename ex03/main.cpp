/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:51 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/12/09 14:33:58 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.h"

// https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/ (formula)
// https://reallysketch.com/app/ (draw triangle)

struct s_point {
    Fixed x, y;
};

Fixed area_triangle(s_point A, s_point B, s_point C)
{
    Fixed area = (A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y)) / 2;
    if (area < 0)
        return (area * -1);
    return (area);
}

int check_point(s_point A, s_point B, s_point C, s_point P)
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
    s_point A;
    s_point B;
    s_point C;
    s_point P;
    
    A.x = 5;
    A.y = 2;
    B.x = 3;
    B.y = 5;
    C.x = 7;
    C.y = 5;
    P.x = 5;
    P.y = 2;
    if (check_point(A, B, C, P))
        std::cout << "Point is inside triangle\n";
    else
        std::cout << "Point is outside triangle\n";
    return 0;
}