> **Note**
>
> This solution relies on the following XOR properties:
>
> - `A ^ A = 0` &nbsp;&rarr;&nbsp; A number XORed with itself becomes `0`.
> - `A ^ 0 = A` &nbsp;&rarr;&nbsp; XORing with `0` does not change the value.
> - XOR is **commutative**: `A ^ B = B ^ A`.
> - XOR is **associative**: `(A ^ B) ^ C = A ^ (B ^ C)`.
>
> Therefore, XORing all numbers from `1` to `n` with all given numbers cancels every common number, leaving only the missing number.
>

**Time Complexity:** *O(n),* **Space Complexity:** *O(1).*

```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x, ans; 
    cin>>n;
    ans = 0;
    for(int i=1; i<n; i++) {
        cin>>x;
        ans = ans ^ i ^ x;
    }
    ans = ans ^ n;
    cout<<ans<<"\n";
    return 0;
}
```