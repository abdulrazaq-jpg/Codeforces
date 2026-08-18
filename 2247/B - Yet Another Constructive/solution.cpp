// Yet Another Constructive
 
#include <iostream>
#include <vector>
using namespace std;
 
void solve()
{
    int n ,k ,m;
    cin >> n >> k >> m;
 
    if(k > m)
    {
        cout << "No
";
    }
    else
    {
        if(n==1 && k==1)
        {
            cout << "Yes
";
            cout << m << "
";
        }
        else
        {
            cout << "Yes
";
 
            for(int i = 1; i < k; i++)
            {
                cout << 1 << " ";
            }
 
            cout << m-k+1;
 
            for(int j = 1; j<=n-k; j++)
            {
                cout << " " << 1;
            }
 
            cout << "
";
        }
    }
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