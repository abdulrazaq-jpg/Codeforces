#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
 
    int maxi = 1;
 
    vector<int> v(n);
    int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
 
        if(v[i] & 1) cnt_1++;
        else{
            if(v[i]%4==0)cnt_2++;
            else cnt_3++;
        }
    }
 
    int a = max(cnt_1, cnt_2);
    int ans = max(a, cnt_3);
 
    cout << ans << endl;
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