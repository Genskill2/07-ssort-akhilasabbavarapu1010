#include <stdio.h>
#include <cs50.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


void swap_max(int arr[],int l,int n)
{
   int temp=0;
   for(int i=n;i<=n;i++)
   {
      int index;
      int max=0;
      for(int j=i;j<l;j++)
      {
         if(arr[j] > max )
         {
            index = j;
            max = arr[j];
         }
        
      }
      
     if(arr[index] > arr[n])
     {
         temp = arr[index];
         arr[index] = arr[n];
         arr[n]=temp;
      }
   
     
   }
}

void ssort(int arr[],int l)
{
   for(int j=0; j < l-1;j++)
   {
      swap_max(arr,l,j);
   }
}
