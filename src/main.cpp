#include "utils.cpp"

#include <iostream>
#include <windows.h>

int main(int argc, char *argv[])
{
    int passwordLength;
    std::string password;
    std::cout << "~~~~~ Password Generator ~~~~~" << std::endl;

    do
    {
        std::cout << "Choose a password length (5 < length < 12): ";
        std::cin >> passwordLength;
        password = utils::generatePassword(passwordLength);
        std::cout << "Your password : "
                  << password << std::endl;
    } while (GetAsyncKeyState(VK_ESCAPE) == 0);

    std::cout << "Exit..." << std::endl;

    return 0;
}