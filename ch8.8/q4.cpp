#include <iostream>

int main (int argc, char *argv[]) {
    int outer{1};
    while (outer <= 5) 
    {
        int inner{5};
        while (inner > 0)
        {
            if (inner <= outer)
            {
                std::cout << inner << ' ';
            }
            else 
            {
                std::cout << "  ";
            }
            --inner;
        }
        std::cout << '\n';
        ++outer;
    }

    return 0;
}
