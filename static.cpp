#include <bits/stdc++.h>
using namespace std;
int func(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return  func(n - 1) + x;
    }
}
int main()
{
    int y = 5;
    cout<<func(y);
    return 0;
}