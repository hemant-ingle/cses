**State:** `dp[sum]` = Number of ordered ways to obtain a sum of `sum`.

**Base Case:** `dp[0] = 1;` There is exactly one way to obtain a sum of `0`: choose no coins (the empty sequence).

**Transition:** Fix the **last coin** used. If the last coin has value `coin`, then the remaining sum must be `sum - coin`.

Therefore,

`dp[sum] += dp[sum - coin]` for every coin such that `sum >= coin`.

> **Note**
>
> - This problem counts **ordered** combinations (different sequences are considered different).
> - Therefore, iterate over **sums first** and **coins second**. This allows every possible last coin to contribute to `dp[sum]`, counting different orders separately.
> - Since each state depends only on smaller sums, processing sums from `1` to `x` guarantees all required states have already been computed.

**Time Complexity:** *O(n · x),* **Space Complexity:** *O(x).*

```cpp
#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin>>n>>x;
    vector<int> coins(n);
    for(int &x: coins) cin>>x;
    vector<long long int> dp(x+1, 0);
    dp[0] = 1;
    for(int sum = 1; sum<=x; sum++) {
        for(int coin: coins) {
            if(sum >= coin) {
                dp[sum] = (dp[sum] + dp[sum - coin]) % MOD;
            }
        }
    }
    cout<<dp[x]<<"\n";
    return 0;
}
```