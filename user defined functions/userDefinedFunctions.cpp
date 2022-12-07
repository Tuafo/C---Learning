#include <iostream>

void happyBirthday(std::string name, int age);

int main()
{
    // function = a block of reusable code

    std::string name = "Thiago";
    int age = 19;


    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age)
{
    std::cout << "Happy birthday to " << name << '\n';
    std::cout << "Happy birthday to " << name << '\n';
    std::cout << "Happy birthday dear " << name << '\n';
    std::cout << "Happy birthday to " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
}