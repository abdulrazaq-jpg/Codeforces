// Ashmal
 
#include <iostream>
#include <vector>
using namespace std;
 
void solve()
{
    string p = "";
 
    int n;
    cin >> n;
 
    for (int i = 1; i <= n; i++)
    {
        string a;
        cin >> a;
 
        if (p.empty())
        {
            p = a;
        }
        else
        {
            if ((a + p) > (p + a))
            {
                p = p + a;
            }
            else
            {
                p = a + p;
            }
        }
    }
 
    cout << p << "
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