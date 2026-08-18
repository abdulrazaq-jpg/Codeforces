// Friendly Numbers
 
#include <iostream>
 
using namespace std;
 
long long get_digit_sum(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
 
void solve() {
    long long x;
    cin >> x;
 
    if (x % 9 != 0) {
        cout << 0 << "
";
        return;
    }
 
    int friendly_count = 0;
 
    for (long long y = x; y <= x + 90; y++) {
        if (y - get_digit_sum(y) == x) {
            friendly_count++;
        }
    }
 
    cout << friendly_count << "
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