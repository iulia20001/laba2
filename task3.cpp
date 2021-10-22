#include <iostream>
using namespace std;

void main()
{
    setlocade(LC_ALL, "Russian");
    int n;
    cout << "Введите месяц";
    cin >> n;5
    if (n=1)
        cout << "Январь" << endl;
    if (n=2)
        cout << "Февраль" << endl;
    if (n=3)
        cout << "Марь" << endl;
    if (n=4)
        cout << "Апрель" << endl;
    if (n=5)
        cout << "Май" << endl;
    if (n=6)
        cout << "Июнь" << endl;
    if (n=7)
        cout << "Июль" << endl;
    if (n=8)
        cout << "Август" << endl;
    if (n=9)
        cout << "Сентябрь" << endl;
    if (n=10)
        cout << "Октябрь" << endl;
    if (n=11)
        cout << "Ноябрь" << endl;
    if (n=12)
        cout << "Декабрь" << endl;
    else is (n < 12)
    {
        cout << "ERROR";
    }
}