#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,a[100000],count=0;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
   /* for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;*/
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                a[j]+=1;
                count++;
            }
        }
    }
   /* for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;*/
    cout<<count;
}
