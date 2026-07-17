**State:** `dp[x]` = Minimum number of coins required to obtain a sum of `x`.

**Base Case:** `dp[0] = 0;` Zero coins are required to obtain a sum of `0`.

**Transition:** To obtain a sum `x`, consider each coin as the **last coin** used. If the last coin has value `coin`, then the remaining sum is `x - coin`. Therefore, `dp[x] = min(dp[x], dp[x - coin] + 1)`. Only consider coins where `x >= coin`.

**Time Complexity:** *O(x * n),* **Space Complexity:** *O(x).*

```cpp
#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin>>n>>x;
    vector<int> coins(n);
    for(int &x: coins) cin>>x;
    vector<int> dp(x+1, INF);
    dp[0] = 0;
    for(int sum=1; sum<=x; sum++) {
        for(int coin: coins) {
            if(sum >= coin) {
                dp[sum] = min(dp[sum], dp[sum-coin]+ 1);
            }
        }
    }
    cout<<(dp[x] == INF ? -1 : dp[x])<<"\n";
    return 0;
}
```