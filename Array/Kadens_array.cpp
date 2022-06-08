#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
      int currSum = 0;
       long long res=arr[0];
       int mend=arr[0];
       
       for(int i=1;i<n;i++){
           mend = max(mend+arr[i],arr[i]);
           res = max((int)res,mend);
       }
    cout<<res;

return 0;
}