#include <iostream>

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    std::cout << "Введите число:\n";
    int x{ 0 };
    std::cin >> x;
    std::cout << "Вы ввели:\n";
    std::cout << x << "\n";
}


