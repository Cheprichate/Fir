#include <iostream>
int i, row, height;

int main() {
    setlocale(LC_ALL, "rus");

    std::cout << "Введите высоту елочки: ";
    std::cin >> height;

    for (i = 0; i < height; i++)
    {
        for (row = 1; row < height - i; row++)
        {
            std::cout << " ";
        }
        for (row = height - 2 * i; row <= height; row++)
        {
            std::cout << "#";
        }
        std::cout << "\n";
    }
}