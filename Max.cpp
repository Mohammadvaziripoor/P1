#include <iostream>

int main() {
    const int size = 5;
    int numbers[size] = {7, 12, 25, 3, 9};

    int max = numbers[0];

    for (int i = 1; i < size; ++i) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    std::cout << "Maximum value: " << max << std::endl;

    return 0;
}
