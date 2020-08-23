#ifndef TABTENN0_HPP_
#define TABTENN0_HPP_

#include <string>
#include <iostream>

using std::string;
class TabtennisPlayer
{
private:
    string firstName;
    string lastName;
    bool hasTable;

public:
    TabtennisPlayer(const string & firstName = "none", const string & lastName = "none", const bool hasTable = false);
    void name() const;
    bool hasTables() const {
        return hasTable;
    }

    void resetTable(bool hasTable) {
        this->hasTable = hasTable;
    }
    
    ~TabtennisPlayer() {
        std::cout << "TabtennisPlayer desctructor..." << std::endl;
    }
};



#endif