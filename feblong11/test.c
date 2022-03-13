#include <stdio.h>
int i,j;

void printArray(int A[], int n)

{
//    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    }
}


    void bubblesort(int A[], int n) {
	
    int temp;
//    int j;
    
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int A[] = {3, 4, 2, 1};
    int n = 4;
    printArray(A, n);
    bubblesort(A, n);
    printArray(A, n);
}
