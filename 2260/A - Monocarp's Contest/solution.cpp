#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
 
int solve()
{
    int n;
    cin >> n;
 
    vector<int> v(n);
    int cnt_0 = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
 
        if(v[i] == 0) cnt_0++;
    }
 
    int sum = v[0] + v[n-1];
 
    if(sum == 0) return 0;
 
    if(sum == 1 && cnt_0>=2) return 1;
    if(sum == 2 && cnt_0 >= 2) return 2;
 
    return -1;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        cout << solve() << endl;
    }
 
    return 0;
}