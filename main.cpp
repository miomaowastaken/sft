// tbh I like to write this in c than cpp
#include <iostream>
#include "second.h"

void userInput(std::string option)
{
    std::string input;

    if(option == "deco")
    {
        printf(": ");
    }
    else
    {
        //literaly without decoration
    }

    std::getline(std::cin >> std::ws, input);
}

int main()
{
    std::cout << "\033[2J" << "\033[H";
    userInput("deco");
    sex();

    return 0;
}
