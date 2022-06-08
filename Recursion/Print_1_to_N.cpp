#include<bits/stdc++.h>
using namespace std;


void printincreasing(int n){
    if(n==0){
        cout<<n<<" ";
        return;
    }
    printincreasing(n-1);
    cout<<n<<" ";
}
void printdecreasing(int n){
    if(n==0){
        cout<<n<<" ";
        return;

    }
    cout<<n<<endl;
    printdecreasing(n-1);
}

int main(){
    int n;
    cin>>n;
    printincreasing(n);
    printdecreasing(n);
}