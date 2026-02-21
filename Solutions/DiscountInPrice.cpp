#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
	// your code goes here
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++) {
    
        int minNum = INT_MAX;
        string amountInString;
        cin >> amountInString;
        string finalAns;
        
        for(int j=0; j<amountInString.size(); j++) {

            finalAns = "";
    
            for(int k=0; k<amountInString.size(); k++) {
                if(k == j) continue;
                
                finalAns += amountInString[k];
            }
            
            if(stoi(finalAns) < minNum) minNum = stoi(finalAns);
            
            
        }
        cout << minNum << endl;
    }
    return 0;
}
