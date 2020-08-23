#include <iostream>

struct person
{
    char name[40];
    int age;
};


static struct person leborn = {"king", 35};

int main(int argc, char const *argv[])
{
    std::cout << leborn.name << " " << leborn.age << "岁" << std::endl;
    person tom {"tom", 18};
    std::cout << tom.name << std::endl;
    return 0;
}

