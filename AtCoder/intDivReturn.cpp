#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int x;
    cin >> x;
    
    if(x >= 0){
        long long int div = x/10;
        if(x%10==0){
            cout << div << endl;
            return 0;
        }
        else{
            cout << div+1 << endl;
            return 0;
        }
    }
    else{
        long long int div = x/10;
        cout << div << endl;
    }
    return 0;
}