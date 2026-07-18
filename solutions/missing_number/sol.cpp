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