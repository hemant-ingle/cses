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