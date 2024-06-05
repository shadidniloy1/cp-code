#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n,f,k; cin >> n >> f >> k;
        int a[n];
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        
        int num = a[f];
        map<int, int> mp;
        int cnt=0, cont=0;
        for(int i=1; i<=n; i++){
            mp[a[i]]++;
            if(a[i]>num){
                cnt++;
            }
        }
        cont = mp[num];
        // cout << cnt+cont;

        
        if(k<cnt+1){
            cout << "NO\n";
        }
        else if(k>=(cnt+cont)){
            cout << "YES\n";
        }
        else{
            cout << "MAYBE\n";
        }
    }
    return 0;
}