#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n), b(n);
 
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
 
        long long sumOfMax = 0;
        for (int i = 0; i < n; i++) {
            sumOfMax += max(a[i], b[i]);
        }
 
        long long bestMin = 0;
        for (int i = 0; i < n; i++) {
            bestMin = max(bestMin, min(a[i], b[i]));
        }
 
        cout << sumOfMax + bestMin << "
";
    }
 
    return 0;
}