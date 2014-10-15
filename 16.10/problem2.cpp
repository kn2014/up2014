#include <iostream>
using namespace std;

int main()
{
	int num; //трицифрено положително число
	cout << "Enter a 3-digit integer: ";
	cin >> num;

	int d3 = num % 10;          // взимаме третата цифра
	int d2 = num / 10 % 10;     // втората цифра
	int d1 = num / 100;  		// първата цифра
	// Тези булеви променливи ще имат стойност 1, ако съответно единиците,
	// десетиците или стотиците са равни на 4.
	bool b1 = (d1 == 4);
	bool b2 = (d2 == 4);
	bool b3 = (d3 == 4);
	cout << boolalpha << (b1 || b2 || b3);
	return 0;
}
