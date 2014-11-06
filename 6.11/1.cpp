#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n,P,P1=0,z=1;
	cout<<"n="; cin>>n;
	while (n!=0)
   	{
   	 	P=n%2;
      		n=n/2;
      		P1=P1+(P*z);
      		z=10*z;
	}
  	cout<<P1;
  	return 0;
}
