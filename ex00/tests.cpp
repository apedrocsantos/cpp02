#include <iostream>

void testValue(int variable)
{
    variable = 20;
    std::cout << "value \t\t" << &variable << "\n";
}

void testPtr(int *variable)
{
    if (variable)
        (*variable) = 30;
    std::cout << "ptr \t\t" << variable << "\n";
}

void testRef(int &variable)
{
    variable = 40;
    std::cout << "ref \t\t" << &variable << "\n";
}

int main()
{
    int i = 10;
    int *null = NULL;

    std::cout << "Address of i: \t" << &i << "\n";
    std::cout << i << "\n";
    testValue(i);
    std::cout << i << "\n";
    testPtr(&i);
    std::cout << i << "\n";
    testPtr(null);
    std::cout << i << "\n";
    testRef(*null);
    std::cout << i << "\n";
}