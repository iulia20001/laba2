#include <iostream>
 
using namespace std;
 
int main (void)
{
    int year;
    bool init = false;
    cout << "Input year [1582 <= year <= 2200]: ";
    do
    {
        cin >> year;
        if ((year < 1582) || (year > 2200))  
        cout << "ERROR" << endl << "Try again: ";
        else init = true;
    }
    while (init == false);
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))  
    cout << "LEAP";
    else cout << "NORMAL";
    return 0;
}