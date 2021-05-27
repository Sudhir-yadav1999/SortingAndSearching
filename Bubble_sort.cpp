

#include <iostream>

using namespace std;

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y= temp;
}


void bubblesort(int arr[],int n)
{

for(int i=0;i<n-1;i++)
{
    
    bool swapin=false;
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j+1]<arr[j])
        {
            swapin=true;
            swap(&arr[j],&arr[j+1]);
        }
    }
    
    
   if(!swapin)
    {
        break;
    }
}

    for(int j=0;j<n;j++)
     {
         cout<<arr[j]<<endl;
     }
}


int main()
{
    //bubble sort
     int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n=sizeof(arr)/sizeof(arr[0]);
     bubblesort(arr,n);
     
     
    return 0;
}
