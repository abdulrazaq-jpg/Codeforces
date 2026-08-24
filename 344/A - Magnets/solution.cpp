#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    string prev;
    cin >> prev;
 
    int groups = 1;
    for (int i = 1; i < n; i++) {
        string current;
        cin >> current;
 
        if (current != prev) {
            groups++;
            prev = current;
        }
    }
 
    cout << groups << "
";
 
    return 0;
}