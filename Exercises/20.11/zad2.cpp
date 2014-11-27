//Проверява дали има 3 поредни отрицателни числа в масива
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4, 2, 6, 8, -10, -4, -25, 1, -2, 23, 82}; /// goleminata na misiva e 11
    int const SIZE = 11;
    bool flag = true;
    for(int i = 0; i<SIZE-2 && flag; i++){
        if(arr[i]<0 && arr[i+1]<0 && arr[i+2]<0){
            flag = false;
            cout<<"V masiva ima 3 poredni otricatelni elementa!";
        }
    }

    if(flag){
        cout<<"V masiva NQMA 3 poredni otricatelni elementa!";
    }
    return 0;
}
