#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
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
    ll t=1;
    cin >> t;
    while (t--)
    {
        //write code here
        ll n; cin >> n;
        string s,x; cin >> x >> s;
        s+=s;
        bool f = false;
        ll ans=0, cnt=0;
        if(x[0]=='g'){
            cout << 0 << endl;
            continue;
        }

        for (ll i = 0; i < s.size(); i++)
        {
            
            if(s[i]=='g'){
                ans = max(ans, cnt);
                f = false;
            }

            if(s[i]==x[0] && f==false){
                f = true;
                cnt = 0;
            }

            if(f) cnt++;
        }
        cout << ans << endl;
        
    }
    return 0;
}