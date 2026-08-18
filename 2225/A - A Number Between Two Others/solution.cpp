// A Number Between Two Others
 
#include <iostream>
#include <vector>
using namespace std;
 
void solve()
{
    long long x,y;
    cin >> x >> y;
 
    bool flag = false;
 
    if(y != (2*x))
    {
        flag = true;
    }
 
    if(flag)
    {
        cout << "YES" << "
";
    }
    else
    {
        cout << "NO" << "
";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
 
    while(t--)
    {
        solve();
    }
 
    return 0;
}