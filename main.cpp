#include <iostream>

int Hello();
int World();

int main()
{
    Hello();
    World();

    return 0;
}

int Hello()
{
    std::cout << "Hello ";

    return 0;
}

int World()
{
    std::cout << "world!" << std::endl;

    return 0;
}
