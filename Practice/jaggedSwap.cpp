#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>vec(n);
        for(int i=0; i<n; i++){
            cin >> vec[i];
        }
        if(vec[0] != 1){
            cout << "NO" <<endl;
        }
        else{
            cout << "YES" <<endl;
        }
    }
}