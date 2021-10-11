
#include <stdio.h>

#include<bits/stdc++.h>

using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[],int low,int high)
{
    int p=arr[low];
    int i=low;
    int j=high;
    
    while(i<j)
    {
        while(arr[i]<=p)
        {
            
        i++;
        
        }
        while(arr[j]>p)
        {
            
        j--;
        
        }
        if(i<j)
        {
        swap(&arr[i],&arr[j]);
        }
        
    }
    swap(&arr[j],&arr[low]);
    
    return j;
}

int quicksort(int arr[],int low,int high)
{
    
    if(low<high)
    {
        int pivot=partition(arr,low,high);
        
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
        
    }
    
    
}


int main()
{
    
    int arr[]={10,2,3,4,5,1,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    quicksort(arr,0,size-1);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
