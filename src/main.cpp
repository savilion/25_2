#include <iostream>
#include "ram.h"

int main()
{
    while (true)
    {
        std::string command;

        std::cout << "Enter the command: to calculate the sum(sum), to save to a file(save), to download from a file(load), to enter from the keyboard(input), "
                     "to display on the screen(display), to exit(exit):"<< std::endl << "->    ";
        std::cin >> command;
        if (command == "input") write();
        else if (command == "display") read();
        else if (command == "sum") sum();
        else if (command == "save") save_file();
        else if (command == "load") load_file();
        else if (command == "exit") break;
        else std::cout << "Error! Invalid command. Try again." << std::endl;
    }
    return 0;
}
