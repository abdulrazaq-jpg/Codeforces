// ezraft and Array
 
#include <iostream>
#include <vector>
using namespace std;
 
void solve()
{
    int n; cin >> n;
 
    if(n==2)
    {
        cout << -1 << "
";
        return;
    }
 
    if(n==1)
    {
        cout << 1 << "
";
        return;
    }
 
    cout << 1 << " " << 2;
 
    int k = n-2;
    long long i = 3; 
 
    while(k--)
    {
        cout << " " << i;
 
        i *= 2;
    }
 
    cout << "
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