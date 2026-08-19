#include <iostream>
#include <vector>
using namespace std;
 
void solve()
{
    int n , m;
    cin >> n >> m;
 
    vector<int> minute(n+1);
    vector<int> state(n+1);
 
    minute[0] = 0;
    state[0] = 0;
 
    for(int i = 1; i <= n; i++)
    {
        int a , b;
        cin >> a >> b;
 
        minute[i] = a;
        state[i] = b;
    }
 
    int points = 0;
 
    for(int i = 0; i < n; i++)
    {
        int parity_1 = (minute[i+1] - minute[i]) % 2;
        int parity_2 = abs(state[i+1] - state[i]) % 2;
 
 
        if(parity_1 == parity_2)
        {
            points += (minute[i+1] - minute[i]);
        }
        else
        {
            points += (minute[i+1] - minute[i] - 1);
        }
    }
 
    points += m-minute[n];
 
    cout << points << "
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