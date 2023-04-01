#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(vector<int>&v,int l,int h)
{
    int pivot=v[l];
    int i=l;
    int j=h;
    while(i<j)
    {
    while(v[i]<=pivot && i<=h-1)
    {
        i++;
    }
    while(v[j]>pivot && j>=l+1)
    {
        j--;
    }
    if(i<j)
    swap(v[i],v[j]);
    }

    swap(v[l],v[j]);
    return j;
}
void qs(vector<int>&v,int l,int h)
{
    if(l<h)
    {
    int pivot=partition(v,l,h);
    qs(v,l,pivot-1);
    qs(v,pivot+1,h);
    }
}
void print(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int>v{4,5,2,3,1};
    int n=v.size();
    qs(v,0,n-1);
    print(v);
}
/*   TC : BC:o(n2) can be optimizes by using randomized quick sort to (nlogn)
           WC:o(Nlogn) 
           SC:o(1)   implace sorting
           it is not stable 
           adaptive  
*/ 