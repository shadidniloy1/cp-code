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
        int x,j; cin >> x;
        vector<int> v(32);

        for(int i=29; i>=0; i--){
            v[i] = (x >= (1<<i));
            x %= (1<<i);
        }
        for(int i=0; i<32; ){
            if(v[i]==0){
                i++;
                continue;
            }
            j=i+1;
            while(v[j]){
                v[j] = 0;
                j++;
            }

            if(j>i+1){
                v[j]=1;
                v[i]=-1;
            }
            i=j;
        }
        cout << 32 << endl;
        for(auto it: v){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}