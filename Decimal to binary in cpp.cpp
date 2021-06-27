#include<iostream>
using namespace std;

int main()
{
    long int n,bin=0,b,i=0,j;
    int arr[10];
    cin>>n;
    while(n>0)
        {
            b=n%2;
            n=n/2;
            arr[i++]=b;
        }
        for(j=i-1;j>=0;j--)
        {
            cout<<arr[j];
        }
    return 0;

}
