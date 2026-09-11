#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
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
 
    bool found_S = false;
 
    for(int i = 0; i < n; i++){
        if(v[i]==1)found_S = true;
        if(!found_S)
        {   if(v[i] == -1){
                v[i] = 1;
                break;
            }
        }
    }
 
    bool found_E = false;
 
    for(int i = n-1; i >= 0; i--){
        if(v[i]==1)found_E = true;
        if(!found_E)
        {   if(v[i] == -1){
                v[i] = 1;
                break;
            }
        }
    }
 
    for(int i = 0; i < n; i++){
        if(v[i] == -1){
            v[i] = 0;
        }
    }
 
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
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
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}