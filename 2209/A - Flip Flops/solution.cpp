// Flip Flops
 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve()
{
    long long n, c, k;
    cin >> n >> c >> k;
 
    vector<long long> v(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
 
    sort(v.begin(), v.end(), std::less<long long>());
 
    for (int i = 0; i < n; i++)
    {
        if (c < v[i])
        {
            break;
        }
 
        long long add = min(k, c - v[i]);
 
        k -= add;
        c += add + v[i];
    }
 
    cout << c << "
";
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