#include <bits/stdc++.h>
using namespace std;
int func(int n)
{
    if (n > 0)
    {
        func(n - 1);
        cout << n << endl;
        }
}
int main()
{
    int x = 3;
    func(x);
    return 0;
}