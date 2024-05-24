#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.size();
    int k = len-2;

    int flag = 0;
    for(int i=0; i<len-1; i++){
        if(s[i] == '='){
            flag++;
        }
    }

    if(s[0]=='<' && s[len-1]=='>' && flag==k){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}