#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> v(n);
 
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
 
    sort(v.begin(), v.end());
 
    int best = 0;
 
    for(int i = 0;i < n;i++)
    {
        int Mex = 0;
 
        for(int j = 0; j < n; j++)
        {
            if(v[j]-v[i] == Mex)
            {
                Mex++;
            }
 
            best = max(best , Mex);
        }
    }
 
    cout << best << "
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