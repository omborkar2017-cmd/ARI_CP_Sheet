#include <iostream>
using namespace std;

int main() {
    int i, n;
    cin >> i;
    
    for(int j=0; j<i; j++) {
        int ans = 0;
        cin >> n;
        for(int k=0; k<n-1; k++) {
            int t;
            cin >> t;
            ans -= t;   
        }
        cout << ans << endl;
        
    }

    return 0;
}
