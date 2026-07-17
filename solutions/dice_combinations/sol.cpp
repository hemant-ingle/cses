#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    vector<long long int> dp(n+1, 0LL);
    dp[0] = 1;
    for(int x=1; x<=n; x++) {
        for(int dice = 1; dice<=6; dice++) {
            if(x >= dice) {
                dp[x] = (dp[x] + dp[x-dice]) % MOD;
            }
        }
    }
    cout<<dp[n]<<"\n";
    return 0;
}