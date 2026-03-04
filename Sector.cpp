#include <iostream>

using std::cout;
using std::cin;

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    cout << "Введите число:\n";
    int x{ 0 };
    cin >> x;
    cout << "Вы ввели:\n";
    cout << x << "\n";
}

