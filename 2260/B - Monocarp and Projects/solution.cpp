#include <iostream>
#include <vector>
using namespace std;
 
void solve()
{
    long long x,y,k;
    cin >> x >> y >> k;
 
    long long max_mod = y - x;
    long long mod_cur = y % x;
    long long sum = 0;
    long long i = 0;
 
    while(!(mod_cur == max_mod || i == k)){
        sum += mod_cur;
        i++;
        x++;
        y++;
 
        mod_cur = y % x;
 
    }
 
    sum += (k - i) * max_mod;
 
    cout << sum << endl;
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