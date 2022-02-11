#include <bits/stdc++.h>

using namespace std;

int x[10000], d[10000];
int n;


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
		if (i <= j) {
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
    

  	freopen("DP.inp", "r", stdin);
  	freopen("DP.out", "w", stdout);

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> x[i] >> d[i];

    quickSort(x, d, 0, n - 1);
    
    
    
    long long int curr_point = x[0], next_point = curr_point + d[0], length_new_cover = d[0];
    long long int sum_cover = length_new_cover;
	
    for (int i = 1; i < n; ++i)
    {
        curr_point = next_point;
        if(x[i] >= curr_point)
        {
            curr_point = x[i]; 
            next_point = curr_point + d[i];
            length_new_cover = d[i];
            sum_cover += length_new_cover;
        //    cout << i <<" >=: " << sum_cover << endl;
        }
        else if(x[i] < curr_point)
        {
            if(x[i] + d[i] > curr_point)
            {
                next_point = x[i] + d[i];
                length_new_cover = next_point - curr_point;
                sum_cover += length_new_cover;
            //    cout << i << " <: " << sum_cover << endl;
            }
        }
    }
    
    
    cout << sum_cover;

    return 0;
}
