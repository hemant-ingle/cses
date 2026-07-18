> **Note**
>
> This solution uses **Binary Exponentiation (Exponentiation by Squaring)** to compute `2ⁿ` efficiently.
>
> - If the exponent is even:
>   - `bᵉ = (b^(e/2))²`
> - If the exponent is odd:
>   - `bᵉ = (b^(e/2))² × b`
>
> Each recursive call halves the exponent, reducing the number of multiplications from **O(n)** to **O(log n)**.
>
> Since the answer can be very large, every multiplication is performed modulo `10⁹ + 7` to prevent overflow.

**Time Complexity:** *O(log n),* **Space Complexity:** *O(log n)* *(recursion stack).*

```cpp
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
```