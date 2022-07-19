#include <ostream>
#include <fstream>
#include <iostream>

void save(double (&arr)[8])
{
    std::ofstream file("data.txt");
    for (double i : arr)
    {
        file << i << std::endl;
    }
    file.close();
}

void load(double (&arr)[8])
{
    std::ifstream file("data.txt");
    if (!file.is_open())
    {
        std::cerr << "Error! File not found." << std::endl;
    }
    else
    {
        double tmp;
        for(double &i : arr)
        {
            file >> tmp;
            i = tmp;
        }
    }
    file.close();
}
