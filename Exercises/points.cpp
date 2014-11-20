#include <iostream>
#include <math.h>

using namespace std;

struct Point
{
    float x;
    float y;
};
//Намира разстоянието между двете най-близки точки.
int main()
{
    int n;
    Point points[50];
    cin>>n;
    for(int i=0; i < n; i++)
    {
        cout<<"Vuvedete koordinati na P"<<(i+1)<<endl;
        cin>>points[i].x>>points[i].y;
    }
    float min =  sqrt(pow(points[0].x - points[1].x, 2) + pow(points[0].y - points[1].y, 2));
    for(int i=0; i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(sqrt(pow(points[i].x - points[j].x, 2) + pow(points[i].y - points[j].y, 2))<min)
            {
                min = sqrt(pow(points[i].x - points[j].x, 2) + pow(points[i].y - points[j].y, 2));
            }
        }
    }

    cout<<min;

    return 0;
}
