/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosantos <pedrosantos@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:05:51 by pedrosantos       #+#    #+#             */
/*   Updated: 2023/11/29 15:53:51 by pedrosantos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.h"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    
    // std::cout << "address of a: " << &a << "\n";
    // std::cout << "address of b: " << &b << "\n";
    // std::cout << "address of c: " << &c << "\n";
    c = b;
    // std::cout << "address of c after = b: " << &c << "\n";
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}