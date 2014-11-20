//Bubble sort
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4, 2, 6, 8, 10, 4, 25, 1};
//    for( int i=0; i<8; i++){
//        cin>>arr[i];
//    }

    for( int i = 0; i<7; i++){
        for (int j = i+1; j<8; j++){
            if(arr[i] > arr[j]){
                arr[i] += arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    for (int i=0; i<8; i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}
