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
        cout << "������ ����� �� 1 �� 100" << endl ;
        cin >> vibor;

        if (vibor < motya) {
            cout << "���� ������!" << endl;
        }
        else if (vibor > motya) {
            cout << "���� ������!" << endl;
        }
        else  {
            cout << "�� �������!" << endl;
        }
    } while (vibor != motya);
    return 0;
} 
