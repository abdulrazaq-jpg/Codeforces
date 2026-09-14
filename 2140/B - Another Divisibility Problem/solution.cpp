#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int solve()
{
    int x;
    cin >> x;
 
    int m = 1e9-1;
 
    int y = m - x;
 
    return y;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        cout << solve() << "
";
    }
 
    return 0;
}