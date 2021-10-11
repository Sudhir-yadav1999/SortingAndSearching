#include <bits/stdc++.h>

using namespace std;

void merge(int arr[],int l,int mid,int h)
{
    int n1=mid-l+1; // mid+1
    int n2=h-mid;  //high -mid
    
    int a[n1]; //temp arrays
    int b[n2];
    
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    
    for(int j=0;j<n2;j++)
    {
        b[j]=arr[mid+j+1];
    }
    
    int i=0;
    int j=0;
    int k=l;
    
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    
    while(i<n1)
    {
        arr[k]=a[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        k++;
        j++;
    }
    
    
}


void mergesort(int arr[],int low,int high)
{
    
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
     
}


int main()
{

int arr[] = {6,3,9,5,2,8,7,1};

int n = sizeof(arr)/sizeof(arr[0]);

mergesort(arr,0,n-1);//  0 to n-1 = 7 acc to index of array 

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
    
}
cout<<endl;


    return 0;
}
------------------------------------------------------------------
  time complexity - O(n*logn)
  
