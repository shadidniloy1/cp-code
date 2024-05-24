#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.size();

    int cnt=0;
    for(int i=0; i<len-1; i++){
        for(int j=i+1; j<len; j++){
            if(s[i] != s[j]){
                cnt++;
            }
        }
    }

    if(cnt == 0){
        cout << 1 <<endl;
    }
    else{
        cout << cnt <<endl;
    }
}