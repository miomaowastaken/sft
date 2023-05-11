#include <iostream>

void userInput()
{
    std::string input;

    std::getline(std::cin >> std::ws, input);
}

int main()
{
    userInput();

    return 0;
}
