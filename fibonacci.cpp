#include <bits/stdc++.h>
using namespace std;
int func(int n)
{
    if (n > 1)
    {
        return func(n - 1) + func(n - 2);
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()

{
    cout<<func(5);
    return 0;
}