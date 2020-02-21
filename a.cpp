#include<bits/stdc++.h>
#define ll long long
#define letsgo ios_base::sync_with_stdio(false);
#define yo cin.tie(NULL);
using namespace std;

// expected time complexity of the below code in O( n^2 )
// and the space complexity is O(n) --> for the dp array
int main()
{
    letsgo;yo;
    ll n;
    cin>>n;

    ll a[n],dp[n] = {0}  ;
    for(ll i=0;i<n;i++)
        cin>>a[i];

    for(ll i=n-1;i>=0;i--)
    {
        ll value = a[i],ans =0;
        if(value  == 0 ) dp[i] = 0;
        else{
            for(ll j = 1;j<=value && j+i<=n;j++ ){
                if(i+j==n-1 ) ans++;

                else{
                   ans += dp[i+j]% 1000000007;
                }
            } dp[i] = ans % 1000000007;
        }
    }

    ll ans = dp[0] % 1000000007;
    cout<<ans<<endl;
}
