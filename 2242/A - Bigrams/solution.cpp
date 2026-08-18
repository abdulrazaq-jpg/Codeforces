// Bigrams
 
#include <iostream>
#include <vector>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> v(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
 
    bool flag = false;
 
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= 3)
        {
            flag = true;
            break;
        }
    }
 
    int cnt = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 2)
        {
            cnt++;
        }
 
        if (cnt == 2)
        {
            flag = true;
            break;
        }
    }
 
    if (flag)
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