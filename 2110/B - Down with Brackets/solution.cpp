#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
void solve()
{
    string s; cin >> s;
 
    int n = s.length();
 
    int cnt = 0, set = 0;
 
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '(')cnt++;
        else cnt--;
 
        if(cnt==0)set++;
    }
 
    if(set > 1)cout << "YES
";
    else cout << "NO
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