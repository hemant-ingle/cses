**State**

`dp[x]` = Number of ways to obtain a sum of `x`.

**Base Case**

```cpp
dp[0] = 1;
```

There is exactly one way to obtain a sum of `0`: choose no dice (the empty sequence).

**Transition**

To obtain a sum `x`, the last die can show any value from `1` to `6`. Therefore,

```
dp[x] = dp[x-1] + dp[x-2] + ... + dp[x-6]
```

Only consider terms where the index is non-negative.

**Time Complexity:** *O(6 * n) = O(n),* **Space Complexity:** *O(n).*

```cpp
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
```