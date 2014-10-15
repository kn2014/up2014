#include <iostream>
using namespace std;
int main()
{
double centerX, centerY, R, pointX, pointY;
cout << "Enter the coordinates of the center: ";
cin >> centerX >> centerY;
cout << "Enter the radius: ";
cin >> R;
cout << "Enter the coordinates of the point: ";
cin >> pointX >> pointY;
cout << boolalpha
<< ((pointX - centerX)*(pointX - centerX) + (pointY - centerY)*(pointY - centerY) <= R*R)
<< endl;
return 0;
}
