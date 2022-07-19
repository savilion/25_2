#include <iostream>
#include "gpu.h"
#include "kbd.h"
#include "cpu.h"
#include "hdd.h"

double buffer[8];

void write()
{
    input_kbd(buffer);
}

void read()
{
    display(buffer);
}

void sum()
{
    std::cout << compute(buffer) << std::endl;
}

void load_file()
{
    load(buffer);
}

void save_file()
{
    save(buffer);
}
