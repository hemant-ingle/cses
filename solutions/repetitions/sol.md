> **Note**
>
> The idea is to keep track of the length of the **current consecutive sequence** (`cur`) and the **maximum sequence length found so far** (`best`).
>
> - Start with `cur = 1` and `best = 1`, since a single character forms a sequence of length `1`.
> - Traverse the string from left to right.
> - If the current character matches the previous one, increment `cur`.
> - Otherwise, start a new sequence by setting `cur = 1`.
> - After each step, update `best = max(best, cur)`.
>
> Since each character is processed exactly once, the algorithm runs in linear time.

**Time Complexity:** *O(n),* **Space Complexity:** *O(1).*

```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin>>s;
    int best=1;
    int cur=1;
    for(int i=1; i<(int)s.size(); i++) {
        if(s[i]==s[i-1]) {
            cur++;
        } else {
            cur=1;
        }
        best = max(best, cur);
    }
    cout<<best<<"\n";
    return 0;
}
```