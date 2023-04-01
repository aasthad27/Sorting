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
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(v[j]<v[min])
            {
                min=j;
            }
        }
        swap(v[i],v[min]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
