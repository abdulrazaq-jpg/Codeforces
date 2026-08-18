// Binary Array Game
 
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
 
    if (v[0]== 0 && v[n-1]==0)
        cout << "Bob
";
    else
        cout << "Alice
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