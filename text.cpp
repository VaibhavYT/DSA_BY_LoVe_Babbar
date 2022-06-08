#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    //int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n/2; i++)
    {
        arr[i]=arr[n-i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    return 0;
    
}