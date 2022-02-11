#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(long int a[], int n)
{
    if (n==0 || n==1)
        return n;
 
    int j = 0;
 
    for (int i=0; i < n-1; i++)
        if (a[i] != a[i+1])
            a[j++] = a[i];
 
    a[j++] = a[n-1];
 
    return j;
}

int main()
{
    int n, k;
    
    int a[100008];
//    
//    freopen("SN.INP", "r", stdin);
//	freopen("SN.OUT", "w", stdout);
    
    cin >> n >> k;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a, a+n);
    
    n = removeDuplicates(a, n);
    
    int j = 0;
    
    for (int i = a[0]; i <= a[n-1]; ++i)
    {       
    	if(i > a[j])	
            j++;
		
		if(i != a[j] )  
        {
            cout << i;
        }
    }

    return 0;
}
