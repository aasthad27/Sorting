#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   vector<int>v{4,5,2,3,1};
    int n=v.size();
    for(int i=1;i<n;i++)
    {
        int key=v[i];
        int j=i-1;
        while(j>=0 && v[j]>key)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}