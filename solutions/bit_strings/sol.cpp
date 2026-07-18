#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long int power(long long int b, long long int e) {
    if(e==0) return 1;
    if(e==1) return b;
    long long int ans = power(b, e>>1);
    if(e&1) {
        return ((ans % MOD) * (ans % MOD) * (b % MOD)) % MOD;
    }
    return ((ans % MOD) * (ans % MOD)) % MOD;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    long long int ans = power(2LL, n);
    cout<<ans<<"\n";
    return 0;
}