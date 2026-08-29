#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
 
int gcd(int a, int b)
{
    while (b != 0)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    
    return a;
}
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> v(n);
 
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
 
    int a = v[0];
    int b = v[n-1];
 
    int ans = gcd(a,b);
 
    cout << ans << "
";
    
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