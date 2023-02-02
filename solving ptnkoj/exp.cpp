#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll findPowerOfP(ll n, ll p)
{
    ll count = 0;
    ll r=p;
    while (r <= n) {
 
        count += (n / r);
 
        
        r = r * p;
    }
    return count;
}

vector<pair<ll, ll> > primeFactorsofK(ll k)
{
    vector<pair<ll, ll> > ans;
 
    for (ll i = 2; k != 1; i++) {
        if (k % i == 0) {
            ll count = 0;
            while (k % i == 0) {
                k = k / i;
                count++;
            }
 
            ans.push_back(make_pair(i, count));
        }
    }
    return ans;
}
ll largestPowerOfK(ll n, ll k)
{
    vector<pair<ll, ll> > vec;
    vec = primeFactorsofK(k);
    ll ans = INT_MAX;
    for (ll i=0; i < vec.size(); i++)
 
        ans = min(ans, findPowerOfP(n,
              vec[i].first) / vec[i].second);
 
    return ans;
}
 
int main()
{
    cin>>n>>m;
    ll t=largestPowerOfK(n,m);
    cout<<t;
    return 0;
}
