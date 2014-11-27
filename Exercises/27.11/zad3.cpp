#include <iostream>

using namespace std;

int main()
{
	char s[256];
	cin.getline(s,256); // чете максимум 256 символа от клавиатурата 
	cout<<s<<endl;
	int i=0,br=1;
	while (s[i]!='\0') // обхожда масива докато не стигне до знака за край на низ
	{
		if(s[i]==' ') { br++; }	
		i++;
	}
	cout<<"Broj dumi "<<br<<endl;
	//приемаме че има само един интервал между думите
	// думите са с една повече от интервалите

	return 0;
}
