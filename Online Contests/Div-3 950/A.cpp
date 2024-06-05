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
        ll n,m; cin >> n >> m;
        string s; cin >> s;
        map<char, int> mp;
        for(ll i=0; i<n; i++){
            mp[s[i]]++;
        }
        ll cnt = 0;
        for(char ch='A'; ch<='G'; ch++){
            if(mp[ch]<m){
                cnt += (m-mp[ch]);
                
            }
            
        }

        cout << cnt << endl;
    }
    return 0;
}