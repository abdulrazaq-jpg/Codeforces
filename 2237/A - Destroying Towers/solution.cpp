# include <iostream>
# include <vector>
using namespace std;
 
int solve()
{
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
 
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[j]>a[i])
            {
                a[j] = a[i];
            }
        }
    }
 
    int sum = 0;
 
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
 
    return sum;
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        cout << solve() << "
";
    }
    
    return 0;
}