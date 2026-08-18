//  Marisa Steals Reimu's Takeout
 
#include <iostream>
#include <vector>
# include <algorithm>
using namespace std;
 
int solve()
{
    int n;
    cin >> n;
 
    int cnt = 0;
 
    vector<int> v;
 
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
 
        if (x == 0)
        {
            cnt++;
        }
 
        else
        {
            v.push_back(x);
        }
    }
 
    int k = v.size();
 
    int cnt2 = 0;
 
    sort(v.begin(),v.end(),less<int>());
    int L = 0;
    int R = k-1;
 
    while(L < R)
    {
       if(v[L]==1 && v[R]==2)
       {
            cnt2++;
            L++;
            R--;
       }
 
       else
       {
            break;
       }
    }
 
    int remaining = R - L + 1;
    if(remaining >= 3)
    {
        cnt += remaining/3;
    }
 
    return cnt+cnt2;
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