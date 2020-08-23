#include <iostream>
#include <exception>
#include <string>
#include <cstring>

using namespace std;

class MyException: public exception {
private:
    const char * msg;
public:
    MyException(const char * msg): msg(msg) {}

    const char* what() const noexcept
    {
        cout << "what...." << endl;
        return msg;
    }
};

void throw_exception() {
    throw MyException("出错啦。。。");
}
int main(int argc, char const *argv[])
{
    
    try
    {
        throw_exception();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
