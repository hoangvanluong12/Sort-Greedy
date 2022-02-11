#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    long int a[100000];
    
    freopen("FLOWERS.inp", "r", stdin);
    freopen("FLOWERS.out", "w", stdout);
    
    cin >> n >> k;

    for(int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a+n);

    int c = 0;
    long int b[100000];
    b[0] = a[0];
    a[0] = 0;

    for(int i = 1; i < n; i++)
    {
        if(a[i] != b[c])
        {
            b[c+1] = a[i];
            a[i] = 0;
            c++;
            if(c == k)
            	break;
        }
    }
    c += 1;
       
    
	for (int i = 0; i < n; ++i)
    {
		if(c == k)
			break;
    	if(a[i] != 0)
    	{
    		b[c] = a[i];
    		c++;
		}
    }
    
//    
//    sort(b, b+c);
    
    for (int i = 0; i < k; ++i)
    {
        cout << b[i] << " ";
    }
    
	
    return 0;
}
