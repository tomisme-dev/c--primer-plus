#include "tabtenn0.hpp"
#include <iostream>

using namespace std;

class RatedPlayer : public TabtennisPlayer
{
private:
    unsigned int rating;

public:
    RatedPlayer(unsigned int rating = 0, const string &firstName = "none", const string &lastName = "none", const bool hasTable = false) : TabtennisPlayer(firstName, lastName, hasTable)
    {
        this->rating = rating;
    }

    RatedPlayer(unsigned int rating, const TabtennisPlayer &tabtennisPlayer): TabtennisPlayer(tabtennisPlayer)
    {
        this->rating = rating;
    }

    unsigned int getRating() {
        return rating;
    }

    void setRating(unsigned int rating) {
        this->rating = rating;
    }

    ~RatedPlayer() {
        cout << "RatedPlayer destructor " << endl;
    }
};

void show(TabtennisPlayer & tabPlayer)
{
    tabPlayer.name();
    cout << "hasTable: " << (tabPlayer.hasTables()? "yes" : "no") << endl;
}

int main(int argc, char const *argv[])
{
    RatedPlayer player(100, "leborn", "james", true);
    player.name();
    cout << sizeof(TabtennisPlayer) << ", " << sizeof(RatedPlayer) << endl;
    cout << "ratting: " << player.getRating() << endl;
    TabtennisPlayer &tabPlayPtr = player;
    tabPlayPtr.name();

    cout << "=================================================" << endl;
    show(player);

    cout << "=================================================" << endl;
    TabtennisPlayer tabPlayer("kobe", "brint");
    show(tabPlayer);

    cout << "=================================================" << endl;
    TabtennisPlayer tabPlayer2(player);
    show(tabPlayer2);
    cout << "=================================================" << endl;

    return 0;
}
