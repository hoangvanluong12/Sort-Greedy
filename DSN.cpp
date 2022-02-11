#include <bits/stdc++.h>

using namespace std;

int c[100000], d[100000];

int partition(int a[10000], int c[10000], int y, int z)
{
    int pivot = a[(y + z) / 2];
    int i = y;
    int j = z;
    int tmp;
    while (i <= j)
    {
        while (a[i] < pivot)
            i++;
        while (a[j] > pivot)
            j--;
        if (i <= j) 
        {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            tmp = c[i];
            c[i] = c[j];
            c[j] = tmp;
            i++;
            j--;
        }
    }
    return i;
}

void quickSort(int a[10000], int c[10000], int y, int z)
{
    int i = partition(a, c, y, z);
    if (y < i - 1)
        quickSort(a, c, y, i - 1);
    if (i < z)
        quickSort(a, c, i, z);
}


int main()
{
    int n;
	long int a, b, count = 0;


//
//    freopen("DSN.inp", "r", stdin);
//    freopen("DSN.out", "w", stdout);

    cin >> n;
    
    for(int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        c[i] = a;
        c[n+i] = b;
        d[i] = 0;
        d[n+i] = 1;
    }
        
    quickSort(c, d, 0, 2*n-1);
    
    //Neu ai = bi thi ai xep truoc bi
    for(int i = 0; i < 2*n-1; i++)
    {
    	if(c[i] == c[i+1])
    	{
    		if(d[i] == 1 && d[i+1] == 0)
    		{
    			d[i] = 0;
    			d[i+1] = 1;
			}
		}
	}

    long long max = 0;


    for(int i = 0; i < 2*n; i++)
    {
        if(d[i] == 0)
            count++;
        else
            count--;
    	if(max <= count)
    		max = count;
    }
    
	cout << "\n";	
	for(int i = 0; i < 2*n; i++)
		cout << c[i] << " " << d[i] << endl;
	
	cout << "\n";
	for(int i = 0; i <= c[2*n-1]; i++)
		c[i] = i+1;
	
	cout << max << " ";
    cout << c[max];

    

    return 0;
}
