#include <iostream>

int main() {
    const int size = 5;
    double numbers[size] = {10.5, 20.0, 30.5, 40.0, 50.5};
    double sum = 0.0;

    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }

    double average = sum / size;

    std::cout << "Average: " << average << std::endl;

    return 0;
}
