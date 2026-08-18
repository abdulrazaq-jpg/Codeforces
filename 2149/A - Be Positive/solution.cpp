#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    int neg = 0, zero = 0;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == -1) neg++;
        else if (x == 0) zero++;
    }
 
    int ans = zero; // Each zero takes at least 1 operation to become 1
 
    if (neg % 2 != 0) {
        ans += 2; // Converting one -1 to 1 costs 2 operations
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