#include "tabtenn0.hpp"
#include <iostream>

// TabtennisPlayer::TabtennisPlayer(const string &firstName,
//                                  const string &lastName, const bool hasTable)
// {
//     this->firstName = firstName;
//     this->lastName = lastName;
//     this->hasTable = hasTable;
// }

TabtennisPlayer::TabtennisPlayer(const string &firstName,
                                 const string &lastName, const bool hasTable):
                                 firstName(firstName), lastName(lastName), hasTable(hasTable)
{
}

void TabtennisPlayer::name() const
{
    std::cout << this->firstName << " * " << this->lastName << std::endl;
}