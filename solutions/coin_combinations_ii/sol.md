**State:** `dp[sum]` = Number of unordered ways to obtain a sum of `sum`.

**Base Case:** `dp[0] = 1;` There is exactly one way to obtain a sum of `0`: choose no coins (the empty combination).

**Transition:** Process one coin at a time. For each coin, update all sums that can include it.

Therefore,

`dp[sum] += dp[sum - coin]` for every `sum >= coin`.

> **Note**
>
> - This problem counts **unordered** combinations (different orders of the same coins are considered the same).
> - Therefore, iterate over **coins first** and **sums second**. Once a coin is processed, it is only appended to combinations formed using the current and previously processed coins, preventing duplicate counting.
> - Iterate `sum` in increasing order so that the current coin can be used multiple times.

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
    for(int coin: coins) {
        for(int sum = coin; sum<=x; sum++) {
            if(sum >= coin) {
                dp[sum] = (dp[sum] + dp[sum - coin]) % MOD;
            }
        }
    }
    cout<<dp[x]<<"\n";
    return 0;
}
```