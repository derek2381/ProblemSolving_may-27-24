// problem link
// https://codeforces.com/problemset/problem/1760/C

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> arr1(n), arr2(n), res(n);

        for(int i = 0;i < n;i++){
            cin >> arr1[i];
            arr2[i] = arr1[i];
        }

        sort(arr2.begin(), arr2.end());

        int max1 = arr2[n-1], max2 = arr2[n-2];

        for(int i = 0;i < n;i++){
            if(arr1[i] != max1){
                // res[i] = arr1[i] - max1;
                cout << arr1[i] - max1 << " ";
            }else{
                // res[i] = arr1[i] = max2;
                cout << arr1[i] - max2 << " ";
            }
        }

        cout << endl;
    }
}
