/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:51 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/12/09 10:44:08 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    // Fixed c(10.0f);
    // Fixed d(10);
    // std::cout << (c == d) << std::endl;
    // d = Fixed(.5f);
    // std::cout << (c >= d) << std::endl;
    // std::cout << (c != d) << std::endl;
    // std::cout << (d / c) << std::endl;
    // std::cout << c++ << std::endl;
    // std::cout << c << std::endl;
    // std::cout << ++c << std::endl;
    return 0;
}