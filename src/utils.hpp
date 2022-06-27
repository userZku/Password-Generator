#ifndef UTILS_H_
#define UTILS_H_

#include <string>

namespace utils
{

    std::string generatePassword(int passwordLenght);

    int random(int low, int high);

}

#endif // UTILS_H_