#include <iostream>
using namespace std;

class Stone
{
private:
    static const int Lbs_per_stone = 14;
    int stone;
    double pds_left;
    double pounds;
public:
    Stone(double lbs);
    Stone(int stone, double lbs);
    Stone();
    ~Stone();
    void show_lbs() const;
    void show_stn() const;

    explicit operator double() {
        return this->pounds;
    }

    operator string*() {
        return new string("hello");
    }
};

Stone::Stone(/* args */)
{
}

Stone::~Stone()
{
}

Stone::Stone(double lbs) {
    pounds = lbs;
    stone = (int)lbs / Lbs_per_stone;
    pds_left = lbs - stone * Lbs_per_stone;
}


Stone::Stone(int stone, double lbs) {
    this->stone = stone;
    this->pds_left = lbs;

    this->pounds = stone * Lbs_per_stone + lbs;
}

void Stone::show_lbs() const {
    using namespace std;
    cout << "show_lbs: " << pounds << endl;

}

void Stone::show_stn() const {
    std::cout << "show stone: " << stone << ", " << pds_left << std::endl;
}


int main(int argc, char const *argv[])
{
    using namespace std;

    Stone s = 56.9;
    s.show_stn();
    s.show_lbs();

    Stone wolfe(285.7);

    double d = (double)wolfe;
    string *ws = wolfe;
    cout << d << endl;
    cout << *ws << ", " << ws << endl;
    return 0;
}
