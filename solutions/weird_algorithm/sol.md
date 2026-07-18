> **Note**
>
> This solution simulates the **Collatz sequence** (also known as the **Weird Algorithm**).
>
> - If the current number is **even**, divide it by `2`.
> - If the current number is **odd**, replace it with `3 × n + 1`.
> - Repeat until the number becomes `1`, printing each value along the way.
>
> The problem guarantees that the sequence eventually reaches `1` for the given constraints.

**Time Complexity:** *O(k),* **Space Complexity:** *O(1).*

Where `k` is the number of terms generated in the Collatz sequence until reaching `1`. Since the exact number of steps is unknown, it cannot be expressed solely in terms of the input value `n`.

```cpp
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n;
    cin >> n;
    while (n != 1)
    {
        cout << n << " ";
        if (n & 1)
            n = n * 3 + 1;
        else
            n >>= 1;
    }
    cout << "1\n";
    return 0;
}
```