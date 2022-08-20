#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
    if(n>0)
    {
        return func(n-1)+n;
    }
    else if (n==0)
    {
        return 0;
    }
}
int main()
{
    cout<< func(5);
    
    return 0;
}