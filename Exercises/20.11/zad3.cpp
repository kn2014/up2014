//Извежда само малките латински букви от масива.
#include<iostream>
using namespace std;
int main(){
char arr[] = {'a', '3', '%', '®', 'b', '™', 'c'};
int const SIZE = 7;
for(int i=0; i<SIZE; i++){
if(arr[i]<='z' && arr[i]>='a'){
cout<<arr[i]<<endl;
}
}
return 0;
}
