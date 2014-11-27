#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char s[256], tmp[256], max[256];
	int maxl = -1, l,k;
	cin.getline(s,256); // чете максимум 256 символа от клавиатурата 
	l= strlen(s);
	for(int i=0;i<l;i++)
	{
		k=0;
		// копира всяка дума във tmp
		while(s[i]!=' ' && s[i]!= '.' && s[i]!=',' && s[i]!='\0')
		{
			tmp[k]=s[i];
			i++; k++;
		}
		tmp[k] = '\0';  // слага знака за край на низ
		// ако дума в tmp е по-голяма от текущата най-голяма я копира в max и запазва
		// дължината в maxl
		if(k>maxl) { maxl=k; strcpy(max,tmp);}  //потърсете в нета функциите от string.h
    }
	
	cout<<maxl<<" "<<max;

	return 0;
}
