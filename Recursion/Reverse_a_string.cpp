#include <bits/stdc++.h>
using namespace std;

void reverseS(string s)
{
    if (s.length() == 0)
    {
        return;
    }

    string ros = s.substr(1);
    reverseS(ros);
    cout << s[0];
}
int main()
{
    string s;
    cin>>s;
    reverseS(s);
    return 0;
}