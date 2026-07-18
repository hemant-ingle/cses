> **Note**
>
> To make the array **non-decreasing**, every element must be at least as large as its previous element.
>
> - Traverse the array from left to right.
> - If `v[i] < v[i - 1]`, increase `v[i]` to `v[i - 1]`.
> - The number of increments required is `v[i - 1] - v[i]`, which is added to the answer.
> - Updating `v[i]` ensures the corrected value is used when processing the next element.
>
> Since each element is processed exactly once, the algorithm runs in linear time.

**Time Complexity:** *O(n),* **Space Complexity:** *O(1).*

```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    vector<int> v(n);
    for(int &x: v) cin>>x;
    long long int ans = 0;
    for(int i=1; i<n; i++) {
        if(v[i-1] > v[i]) {
            ans += (v[i-1] - v[i]);
            v[i] = v[i-1];
        }
    }
    cout<<ans<<"\n";  
    return 0;
}
```