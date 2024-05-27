// problem link
// https://www.codechef.com/problems/TENPACKETS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x, y;
	    cin >> x >> y;

	    if(4*x > 2*y){
	        cout << x+(2*y) << endl;
	    }else{
	        cout << x + (4*x) << endl;
	    }
	}

}
