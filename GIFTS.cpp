#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    long x, a[100000];

	freopen("GIFTS.inp", "r", stdin);
	freopen("GIFTS.out", "w", stdout);
    cin >> n >> x;
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n);

    int l = 0, r = n-1;
    long max = 0;

    while(l < r)
    {
        if(a[l] + a[r] <= x)
        {
            if(a[l] + a[r] > max)
                max = a[l] + a[r];
        	l++;
        }
        else if(a[l] + a[r] > x)
            r--;
        else
            l++;
    }

    cout << max;
    return 0;
}
