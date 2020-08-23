#include "tabtenn0.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    TabtennisPlayer player1("leborn", "james", true);
    TabtennisPlayer player2("kobe", "brient", false);

    player1.name();
    
    player2.name();
    return 0;
}
