#include<stdio.h>  
int Minimum_element(int[],int,int); 

void main ()  
{  
    int Arr[] = {12, 5, 34, 21, 45, 100, 25, 17, 40, 3};  
    int i,position,temp;  
    int n = sizeof(Arr[0])/sizeof(int);
    for(i=0; i<n; i++)  
    {  
        position = Minimum_element(Arr, n, i);  
        temp = Arr[i];  
        Arr[i]=Arr[position];  
        Arr[position] = temp;  
    }  
    printf("The sorted array is:\n");  
    for(i=0; i<n; i++)  
    {  
        printf("%d ",Arr[i]);  
    }  
}  
int Minimum_element(int a[], int n, int i)  
{  
    int min, position, j;  
    min = a[i];  
    position = i;  
    for(j=i+1;j<10;j++)  
    {  
        if(a[j] < min)  
        {  
            min = a[j];  
            position = j;  
        }  
    }  
    return position;  
}
