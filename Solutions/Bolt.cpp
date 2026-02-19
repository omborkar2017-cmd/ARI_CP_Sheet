#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++) {
        double finishUnits, distancetoBolt, tigerAccelaration, boltSpeed;
        cin >> finishUnits;
        cin >> distancetoBolt;
        cin >> tigerAccelaration;
        cin >> boltSpeed;
        double timeToComplete = finishUnits/boltSpeed;
        double tigerDisplacement = (tigerAccelaration*timeToComplete*timeToComplete)/2;
        if(tigerDisplacement >= (finishUnits + distancetoBolt)) cout << "Tiger\n";
        else cout << "Bolt\n";
    }
    return 0;
}
