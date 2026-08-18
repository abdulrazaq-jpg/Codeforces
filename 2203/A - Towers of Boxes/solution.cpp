// Towers of Boxes
 
#include <iostream>
#include <vector>
using namespace std;
 
void solve()
{
    int n, m, d;
    cin >> n >> m >> d;
 
    int ans = 0;
    int tw = n * m;
    int bpt = (m + d)/m;
 
    if (m > d)
    {
        ans = n;
    }
    else
    {
        while (tw > 0)
        {
            tw = tw - (bpt * m);
            ans++;
        }
    }
 
    cout << ans << "
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