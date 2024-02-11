
//Time: best:O(n), avg:O(n^2), worst:O(n^2)
//Memory complexity: O(n)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        int position=i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[position] > a[j])
                position=j;
        }
        if(position != i)
        {
            swap(a[i],a[position]) ;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}
