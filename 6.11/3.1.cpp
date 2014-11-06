#include <iostream>
#include<math.h>
using namespace std;
int main ()
{
    double chislitel = 1, znamenatel = 1, sum = 0, eps = 0.01, n=1;
    double x;
    cout<<"x = ";
    cin>>x;
    while (fabs(chislitel / znamenatel) > eps) {
            sum += chislitel / znamenatel;
            chislitel = -(chislitel*x*x);
            znamenatel = znamenatel * 2 * n *(2 * n - 1);
            n++;
        }
    cout<<"cos(x) = "<<sum;
}
