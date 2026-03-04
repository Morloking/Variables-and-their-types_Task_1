#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;

int main()
{
    system("chcp 1251 > nul");
    cout << "Введите число:\n";
    int x{ 0 };
    cin >> x;
    cout << "Вы ввели:\n";
    cout << x << "\n";
}
