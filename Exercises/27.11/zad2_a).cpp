#include <iostream>

using namespace std;

int main()
{
	int a[100][100], n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j<=i) { 	a[i][j]=j+1;  	}
			else 	{  	a[i][j]= 0 ;	}
		}
	}

	// Извеждаме матрицата
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<'\t';
		}
		cout<<endl;
	}
	return 0;
}
