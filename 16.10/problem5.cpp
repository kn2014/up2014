#include <iostream>

using namespace std;

int main()
{
	double a, b, c, P1; // a , b ,c са страните на триъгълника
	// въвеждане на страните на триъгълника от клавиатурата
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
	{   // ако има такъв триъгълник

		if ((a == b) || (a == c) || (c == b)) // поне две страни са равни
		{
			if ((a + b + c) / 3 == a)
			{
				cout << "Ravnostranen e" << endl;
			}
			else
			{
				cout << "Ravnobedren e" << endl;
			}
		}
		else
		{
			cout << "Raznostranen e" << endl;

		}
	}
	else
	{
		cout << "Nqma takuv triugulnik" << endl;
	}

	return 0;
}
