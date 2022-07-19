#include <iostream>

void input_kbd (double (&arr)[8])
{
    for (int i =0; i < 8; ++i)
    {
        std::cout << "Input number " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}
