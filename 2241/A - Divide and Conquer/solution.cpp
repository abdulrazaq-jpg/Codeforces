// Divide And Conquer
 
#include <iostream>
#include <vector>
using namespace std;
 
void solve()
{
    int x, y;
    cin >> x >> y;
 
    if (x%y == 0)
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
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}