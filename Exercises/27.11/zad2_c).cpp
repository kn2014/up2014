#include <iostream>

using namespace std;

int main()
{
	int a[100][100], n;
	cin>>n;
	// Обхождаме матрицата по стълбове до средата, защото втората половина е огледална на първата половина.
	for(int j=0;j<ceil(n/2.0);j++)  
	{
		for(int i=0;i<n;i++)
		{
			// Ненулеви са елементите върху главния и вторичния диагонал, както и елементите
			// които са едновременно под главния и под вторичния диагонал
			// и елементите които са едновременно над главния и над вторичния диагонал
			if(((i>=j)&&((n-j-1)<=i))||((i<=j)&&((n-j-1)>=i)))
			{
				// Елементите са равни на колоната която се намират + 1
				a[i][j]= j+1;
				a[i][n-j-1] = j+1;   // даваме стойност и на огледално разположения елемент спрямо средния ред елемент
			}
			// всички отстанали елементи са 0
			else 
			{
				a[i][j]= 0;          
				a[i][n-j-1] = 0;
			}
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
