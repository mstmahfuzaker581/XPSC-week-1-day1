#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0;
    int long long ans = 0;
    while (l < n && r < m)
    {
        int cnt1 = 0, cnt2 = 0, curr = a[l];
        while (a[l] == curr && l < n)
        {
            cnt1++;
            l++;
        }
        while (curr > b[r] && r < m)
        {
            r++;
        }
        while (b[r] == curr && r < m)
        {
            cnt2++;
            r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans << endl;

    return 0;
}