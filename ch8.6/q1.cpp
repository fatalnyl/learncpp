#include <iostream>

void calculate(int x, int y, char z)
{
    int res{};
    std::cout << "Enter x:";
    std::cin >> x;
    std::cout << "Enter y:";
    std::cin >> y;
    std::cout << "Enter z:";
    std::cin >> z;

    switch (z) 
    {
    case '+':
        res = x + y;
        break;
    case '-':
        res = x - y;
        break;
    case '/':
        res = x / y;
        break;
    case '%':
        res = x % y;
        break;
    default:
        std::cout << "Invalid Operator!";
        break;
    }
    std::cout << "Result is: "<< res << '\n';
    
}
int main (int argc, char *argv[]) {
    int x{}; 
    int y{}; 
    int z{};
    calculate(x, y, z);
}


