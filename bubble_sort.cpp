#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    
    vector<int>v{4,5,2,3,1};
    int n=v.size();
    for(int i=0;i<n-1;i++)
    {
        int flag=0;           
        for(int j=0;j<n-i-1;j++) //optimised
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

}