#include <iostream>

int main() {
    //Working with variables
    /*
        int x; //declaration
        x = 5; //assignment
    */

    int x = 5;
    int y = 6;
    int sum = x + y;


    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << "A soma de x e y é: " << sum << '\n';

    //Integer (whole number)
    int age = 19;
    int year = 2022;
    int days = 7.5;
    
    std::cout << days << '\n';

    //double(number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    
    std::cout << price << '\n';

    //single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    std::cout << currency << '\n';
    std::cout << initial << '\n';

    //boolean (true or false)
    bool studente = false;
    bool power = true;
    bool forSale = true;

    //string (objects that represents a sequence of text)
    std::string name = "Thiago";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";


    std::cout << "Hello "<< name << '\n';
    std::cout << "You ara " << age << " years old!" << '\n';
    
    return 0;
}