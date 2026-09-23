#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    bool sorted = true;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] > s[i + 1]) {
            sorted = false;
            break;
        }
    }
    if (sorted) {
        cout << 0 << "
";
        return;
    }
 
    if (s[0] == '1') {
        int zeros = 0;
        for (char c : s) {
            if (c == '0') zeros++;
        }
        cout << zeros << "
";
        return;
    }
 
    
    int total_zeros = 0;
    for (char c : s) {
        if (c == '0') total_zeros++;
    }
 
    int ones_in_prefix = 0;
    int zeros_in_prefix = 0;
    int ans = n; 
 
    for (int k = 0; k < n; ++k) {
        if (s[k] == '1') ones_in_prefix++;
        else zeros_in_prefix++;
 
        int zeros_in_suffix = total_zeros - zeros_in_prefix;
        
        
        int current_cost = ones_in_prefix + zeros_in_suffix;
        ans = min(ans, current_cost);
    }
 
    cout << ans << "
";
}
 
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}