/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:51 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/12/19 15:56:24 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

// https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/ (formula)
// https://reallysketch.com/app/ (draw triangle)


bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point A(5, 2);
    Point B(3, 5);
    Point C(7, 5);
    Point P(5.9f, 3.7f);
    
    if (bsp(A, B, C, P))
        std::cout << "Point is inside triangle\n";
    else
        std::cout << "Point is outside triangle\n";
    
    Point P2(6.25f, 3.75f);
    if (bsp(A, B, C, P2))
        std::cout << "Point is inside triangle\n";
    else
        std::cout << "Point is outside triangle\n";
    Point P3(5, 2);
    if (bsp(A, B, C, P3))
        std::cout << "Point is inside triangle\n";
    else
        std::cout << "Point is outside triangle\n";
    return 0;
}