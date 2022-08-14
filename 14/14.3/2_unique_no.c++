#include<iostream>
using namespace std; 

//not complete;


int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i=0; i < n; i++)
    {
      xorsum = xorsum^arr[i];
    }
    int setbit = 0;
     int pos =0;
    while (setbit!=1)
    {
       setbit = xorsum & 1;
       pos++;
       xorsum = xorsum>>1;       
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
    }
    
}

int main(){
    
    return 0;
}