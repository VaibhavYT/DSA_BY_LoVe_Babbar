#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n)
{
    if(n==1){
        return true;
    }
    bool restArray = sorted(arr + 1, n - 1);
    if (arr[0] < arr[1] && restArray)
    {
        return true;
    }
}



int main(){
   int arr[] = {1,3,5,4,9};
    
    cout<<sorted(arr, 5)<<endl; 
    return 0;
}
