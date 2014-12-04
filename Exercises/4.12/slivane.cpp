#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1,2,3,7,8,9,14,15,17};
    const int S1=9;
    int arr2[] = {4,5,6,8,10,12,16,20,23,25,27};
    const int S2 = 11;

    int arr3[S1+S2];

    int i1 = 0, i2 = 0;
    for (int i3=0; i3<S1+S2; i3++){
        if(i1>=S1) { arr3[i3] = arr2[i2]; i2++;}

        else if(i2>=S2) { arr3[i3] = arr1[i1]; i1++;}

        else if(arr1[i1]<arr2[i2]){
            arr3[i3] = arr1[i1]; i1++;

        }else{
            arr3[i3] = arr2[i2]; i2++; }

            cout<<arr3[i3]<<" ";
    }

    return 0;
}
