#include <iostream>

void display (double (&arr)[8])
{
    for (double i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
