#include<iostream>
using namespace std;
int main(){
    int arr[][3] = {4,1,5,7,2,8,9,3,6};
    int a[9] = {4,1,5,7,2,8,9,3,6};
    
    //Сортиране на едномерния масив
    for( int i = 0; i<8; i++){
        for (int j = i+1; j<9; j++){
            if(a[i] > a[j]){
                a[i] += a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
for (int i=0; i<9; i++){
cout<<a[i]<<endl;
}

    int counter = 0;
    const int SIZE = 3;
    
    //обхождане на двумерния масив диагонално
    for(int i = 0; i<SIZE; i++){
        for (int j = i; j>=0; j--, counter++){
            arr[i-j][j] = a[counter];
        }
    }

    for(int i = 1; i<SIZE; i++){
        int k = 0;
        for (int j = SIZE-1; j>= i; j--, k++, counter++){
            arr[i+k][j] = a[counter];
        }
    }

    for (int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
return 0;
}
