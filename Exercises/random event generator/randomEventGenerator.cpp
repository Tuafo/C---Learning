#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randNum = (rand() % 5) + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You win a sword!";
        break;
    case 2:
        std::cout << "You win a chest plate!";
        break;
    case 3:
        std::cout << "You win a shield!";
        break;
    case 4:
        std::cout << "You win a picaxe!";
        break;
    case 5:
        std::cout << "You win a potion!";
        break;
    }
    return 0;
}
