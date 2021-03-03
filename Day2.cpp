#include<bits/stdc++.h>
using namespace std;
void bubble(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j+1]<a[j]) swap(a[j],a[j+1]);
        }
    }
}
void selection(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min]) min=j;
        }
        swap(a[min],a[i]);
    }
}
void insertion(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key=a[i];
        while(j>0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
    bubble(a,n);
    for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
    selection(a,n);
    for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
    insertion(a,n); 
    for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
}