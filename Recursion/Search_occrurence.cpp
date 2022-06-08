#include <bits/stdc++.h>
using namespace std;
int firstoc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstoc(arr, n, i + 1, key);
}
int lastocr(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int restarray = lastocr(arr, n, i + 1, key);
    if(restarray!=-1){
        return restarray;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int arr[5] = {4, 8, 2, 8, 9};
    int n = 5;
    cout << firstoc(arr, 5, 0, 8) << endl;
    cout << lastocr(arr, 5, 0, 8);
    return 0;
}