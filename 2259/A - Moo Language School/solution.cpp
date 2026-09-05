#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve()
{
    int n, k;
    cin >> n >> k;
 
    string s;
    cin >> s;
 
    int farm_cnt = n/k;
 
    vector<int> v(n);
    bool farms[farm_cnt] = {false};
 
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '0'){
            if(farms[i/k] == false){
                farms[i/k] = true;
            }
        }
    }
 
    int ans = 0;
 
    for(int i = 0; i < farm_cnt; i++)
    {
        if(farms[i ]== false) ans++;
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
 
    while(t--)
    {
        solve();
    }
 
    return 0;
}