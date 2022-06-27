#include <iostream>
#include <random>

namespace utils
{

    std::default_random_engine gen; // random seed

    int random(int low, int high)
    {
        std::uniform_int_distribution<> dist(low, high);
        return dist(gen);
    }

    std::string generatePassword(int passwordLenght)
    {
        std::string password = "";

        std::string alphabet = "abcdefghijklmnoqprstuvwyzx";
        std::string ALPHABET = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
        std::string symbols = "!@#$^&*?";
        std::string numbers = "0123456789";

        int option;

        for (int i = 0; i < passwordLenght; i++)
        {
            option = random(1, 4);
            switch (option)
            {
            case 1:
                password += alphabet[random(0, alphabet.length() - 1)];
                break;
            case 2:
                password += ALPHABET[random(0, ALPHABET.length() - 1)];
                break;
            case 3:
                password += symbols[random(0, symbols.length() - 1)];
                break;
            case 4:
                password += numbers[random(0, numbers.length() - 1)];
                break;
            }
        }
        return password;
    }

} // namespace utils