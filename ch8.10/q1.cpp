#include <iostream>

int main (int argc, char *argv[]) {
    for (int i{0}; i <= 20; ++i) {
        if (i % 2 == 0) std::cout << i;
    }
    return 0;
}
