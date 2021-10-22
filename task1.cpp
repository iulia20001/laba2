#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    setlocale(0, "");
    double x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты первой точки через пробел:";
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки через пробел:";
    cin >> x2 >> y2;
    cout << "Введите координаты третей точки через пробел:";
    cin >> x3 >> y3;
 
    struct point
    {
        double x;
        double y;
    };
 
    point A;
    A .x = x1;
    A .y = y1;
 
    point B;
    B.x = x2;
    B.y = y2;
 
    point C;
    C.x = x3;
    C.y = y3;
    double space(point a, point b, point c);
    {
        return 0.5*fabs((A.x - C.x)*(B.y - C.y) - (A.y - C.y)*(B.x - C.x));
    }
    cout << space;
    system("pause");
    return 0;
}