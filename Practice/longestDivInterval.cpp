#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        long long int n; cin >> n;
        int cnt = 0;
        for(long long int i=1; i<=n; i++){
            if(n%i == 0){
                cnt++;
            }
            else{
                break;
            }
        }
        cout << cnt << endl;
    }
}