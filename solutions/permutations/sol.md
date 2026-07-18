> **Note**
>
> The goal is to arrange the numbers so that the absolute difference between every pair of adjacent numbers is **not equal to `1`**.
>
> - Print all **even** numbers first, followed by all **odd** numbers.
> - Adjacent numbers within each group differ by `2`, so they are always valid.
> - The only adjacent pair across the two groups is the last even and the first odd, whose difference is also greater than `1`.
>
> For `n = 2` and `n = 3`, no valid permutation exists, so the answer is `"NO SOLUTION"`.

**Time Complexity:** *O(n),* **Space Complexity:** *O(1).*

```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    if(n==2 || n==3) {
        cout<<"NO SOLUTION\n";
    }
    else {
        for(int i=2; i<=n; i+=2) cout<<i<<" ";
        for(int i=1; i<=n; i+=2) cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}
```