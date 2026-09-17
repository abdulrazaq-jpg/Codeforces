#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
void solve()
{
    long long n;
    cin >> n;
    
    string s = to_string(n);
 
    int size = s.length() - 1;
 
    vector<long long> store_x;
 
    int i = 1;
    long long p = 10;
 
    while(i <= size){
        long long divisor = p + 1;
        if(n % divisor == 0){
            long long x = n / divisor;
            store_x.push_back(x);
        }
 
        p*=10;
        i++;
    }
 
    if(store_x.size() == 0)cout << 0;
    else{
        
        cout << store_x.size() << "
";
    
        for(int i = store_x.size()-1 ; i>=0 ; i--){
            cout << store_x[i] << " ";
        }
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