#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve()
{
    int n; cin >> n;
 
    vector<int> v(n);
 
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
 
    vector<int> q(n);
 
    for(int i = 0; i< n; i++){
        cout << n - v[i] + 1 << " ";
    }
 
    cout << endl;
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