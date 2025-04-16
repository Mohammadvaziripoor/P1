#include <iostream>

int main() {
    const int size = 5;
    int numbers[size] = {7, 12, 25, 3, 9};

    int min = numbers[0];

    for (int i = 1; i < size; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    std::cout << "Minimum value: " << min << std::endl;

    return 0;
}
