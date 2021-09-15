

#include <iostream>

using namespace std;


void insertionsort(int arr[],int n)
{

    
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            
            arr[j+1]=arr[j];
            j--;
        
        }
        arr[j+1]=temp;
    }
    


    for(int j=0;j<n;j++)
     {
         cout<<arr[j]<<endl;
     }
}


int main()
{
    
     int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n=sizeof(arr)/sizeof(arr[0]);
     insertionsort(arr,n);
     
     
    return 0;
}
