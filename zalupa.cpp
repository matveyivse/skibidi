#include <windows.h>
#include <locale.h>
#include <random>
#include <iostream>

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    std::random_device rd;
    int motya = rd()% 101;
    int vibor;

    do {
        cout << "Угадай число от 1 до 100" << endl ;
        cin >> vibor;

        if (vibor < motya) {
            cout << "Надо больше!" << endl;
        }
        else if (vibor > motya) {
            cout << "Надо меньше!" << endl;
        }
        else  {
            cout << "Вы угадали!" << endl;
        }
    } while (vibor != motya);
    return 0;
} 
