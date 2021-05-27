#include <iostream>

using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void insertionsort(int arr[],int n)
{

    int i;
    int j;
    for(i=0;i<n-1;i++)
    {
     
       int small=i;
      
      for(j=i+1;j<n;j++)
      {
       if(arr[j]<arr[small])
       {
           small=j;
       }
       
      }
      if(small !=i){
      swap(&arr[i],&arr[small]); 
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
     insertionsort(arr,n);
     
     
    return 0;
}
