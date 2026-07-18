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