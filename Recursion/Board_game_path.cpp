#include <bits/stdc++.h>
using namespace std;

int countPath(int s, int e)
{
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }
    int count1 = 0;
    for (int i = 0; i <= 6; i++)
    {
        count1 += countPath(s + i, e);
        
    }
    return count1;
}


int main(){
    cout<<countPath(5,8)<<endl;
    return 0;
}