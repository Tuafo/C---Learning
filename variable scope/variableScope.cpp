#include <iostream>

int myNum = 3; // global - avoid global variables, because polutes the global namespace

void printNum(int myNum);

int main()
{
    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions

    //int myNum = 1; // local

    printNum(myNum); 

    std::cout << ::myNum << '\n'; //using de global version of the variable

    return 0;
}

void printNum(int myNum)
{
    //int myNum = 2; // local
    std::cout << myNum << '\n';
}
