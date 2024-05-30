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
        string s; cin >> s; 

        int b = 0;
        for(ll i=0; i<n-1; i++){
            // int m = a[i];
            if((int(s[i])<=int(s[i+1])) && (int(s[i])<65 || int(s[i])>90)){
                b = 1;
            }
            else{
                b = 0;
                break;
            }
        }
        if(n==1 && (int(s[0])<65 || int(s[0])>90)){
            cout << "YES\n";
        }
        else if(b==1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}