#include <iostream>

int main()
{
    // break = break out of a loop
    // continue = ship current iteration

    for (int i = 1; i <= 20; i++)
    {
        if (i == 17)
        {
            //break;
            continue;
        }
        
        std::cout << i << '\n';
    }
    

    return 0;
}
