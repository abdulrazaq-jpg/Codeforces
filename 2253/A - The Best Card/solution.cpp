// The Best Card
 
#include <iostream>
#include <vector>
using namespace std;
 
bool isprime(int n)
{
    if(n==1)
    {
        return 0;
    }
 
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
 
    return 1;
}
 
void solve()
{
    int n;
    cin >> n;
 
    if(isprime(n+1))
    {
        cout << "YES
";
    }
    else
    {
        cout << "NO
";
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