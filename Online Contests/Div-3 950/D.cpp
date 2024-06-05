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

const int N = 2e5+5;
ll n;
ll a[N], b[N], c[N];

bool check(int x){
    int tt=0;

    for(ll i=1; i<=n; i++){
        if(i==x) continue;
        c[++tt] = a[i];
    }

    int last = 1;
    for(ll i=1; i<n-1; i++){
        ll y = __gcd(c[i], c[i+1]);
        if(y<last) return false;
        last = y;
    }
    return true;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        
        for(ll i=1; i<=n; i++) cin >> a[i];
        for(ll i=1; i<n; i++) b[i]= __gcd(a[i], a[i+1]);

        int x=-1;
        for(ll i=1; i<n-1; i++){
            if(b[i]>b[i+1]){
                x=i;
                break;
            }
        }

        if(x==-1){
            cout << "YES\n";
        }
        else if(check(x) || check(x+1) || check(x+2)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}