#include<iostream>
using namespace std;
int main()
{
    int n,m,S,Smax,Nmax;
    int a[20][20];
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        S=0;
        for(int j=0;j<m;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]= "; cin>>a[i][j];
            S=S+a[i][j];
        }
        if(i==0) { Nmax = 0; Smax = S; }
        if(S>Smax) { Smax = S; Nmax = i;}
    }
    cout<<endl<<"Naj-golqm sbor na red "<<Nmax<<" "<<Smax<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<'\t';

        }
        cout<<endl;
    }

    for(int j=0;j<m;j++)
    {
        S=0;
        for(int i=0;i<n;i++)
        {
            S=S+a[i][j];
        }
        if(j==0) { Nmax = 0; Smax = S; }
        if(S>Smax) { Smax = S; Nmax = j;}
    }
     cout<<endl<<"Naj-golqm sbor na kolona "<<Nmax<<" "<<Smax<<endl;

    return 0;
}
