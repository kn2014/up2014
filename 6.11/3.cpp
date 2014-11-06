#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x,S=1,prev,curr=1;
	int n=1;
	cin>>x;
	do
	{
		prev = curr;
		double fact = 1;
		for(int i=2;i<=2*n;i++)
		{
			fact=fact*i;
		}
		curr= (pow(-1.0,n)/fact)*pow(x,2*n);
		S=S+curr;
		n++;
	} while((curr-prev)<=-0.01 || (curr-prev)>=0.01);
	cout<<S;
	return 0;
}
