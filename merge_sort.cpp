#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int>&v,int l,int h,int mid)
{
    int one=mid-l+1;
    int two=h-mid;
    int arrayone[one];
    int arraytwo[two];
    for(int i=0;i<one;i++)
    {
        arrayone[i]=v[l+i];
    }
    for(int j=0;j<two;j++)
    {
        arraytwo[j]=v[mid+1+j];
    }
    int indexone=0;
    int indextwo=0;
    int indexmerge=l;
    while( indexone<one && indextwo <two)
    {
        if(arrayone[indexone]<=arraytwo[indextwo])
        {
             v[indexmerge]=arrayone[indexone];
             indexmerge++;
             indexone++;
        }
        else{
            v[indexmerge]=arraytwo[indextwo];
            indexmerge++;
            indextwo++;
        }
    }
    while(indexone<one)
    {
        v[indexmerge]=arrayone[indexone];
        indexmerge++;
        indexone++;
    }
     while(indextwo<two)
     {
        v[indexmerge]=arraytwo[indextwo];
        indexmerge++;
        indextwo++;
     }
   delete[] arrayone;
   delete[] arraytwo;
}
void mergesort(vector<int>&v,int l,int h)
{
    if(l<h)
    {
    int mid=(l+h)/2;
    mergesort(v,l,mid);
    mergesort(v,mid+1,h);
    merge(v,l,h,mid);
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
    mergesort(v,0,n-1);
    print(v);
}