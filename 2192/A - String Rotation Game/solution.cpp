// String Rotation Game
 
#include <iostream>
#include <vector>
using namespace std;
 
int count_block(string &s)
{
    int cnt = 0;
 
    for(int i = 1; i < s.length(); i++)
    {
        if(s[i] != s[i-1])
        {
            cnt++;
        }
    }
 
    return cnt;
}
 
void reverse(string &s , int l , int r)
{
    int i = l;
    int j = r;
 
    while(j > i)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
 
        i++;
        j--;
    }
}
 
void solve()
{
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int block_cnt = count_block(s);
 
 
    reverse(s,0,n-1);
    reverse(s,1,n-1);
 
    for(int i = 1 ; i <= n ; i++)
    {
        reverse(s,0,n-1);
        reverse(s,1,n-1);
        block_cnt = max(block_cnt , count_block(s));
    }
 
    cout << block_cnt+1 << "
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