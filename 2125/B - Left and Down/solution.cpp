#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
void solve()
{
    long long a,b,k;
    cin >> a >> b >> k;
 
    long long x = a, y = b;
    while (y != 0)
    {
        long long remainder = x % y;
        x = y;
        y = remainder;
    }
    long long g = x;
 
    if(a/g <= k && b/g <= k)cout << 1 << "
";
    else{
        cout << 2 << "
";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}