/*//This code is a C program that inserts an element into an array of integers. It takes user input for the length of the array (n), the elements of the array, and the position where to insert the element.
 It then prints out the original array, followed by the array with the inserted element.*/
#include<stdio.h>
#define max 100

void main(){
    int p[max],n,i,k,j;
    
    printf("Enter length of array\n");

    scanf("%d",&n);
    
    printf("Enter %d elements of array\n",n);
    
    for(i=0;i<=n-1;i++ )
    
    scanf("%d",&p[i]);
    
    printf("\nThe array is:\n");
    
    for(i=0;i<n-1;i++)
        printf("%d\n",p[i]);
    printf("\nEnter position where to insert:");
    scanf("%d",&k);
    k--;
    for(j=n-1;j>=k;j--)
        p[j+1]=p[j];
    printf("\nenter the value of to insert:");
    scanf("%d",&p[k]);
    printf("\nArray after insertion of element:\n");
    for(int i=0;i<n;i++)
        printf("%d\n",p[i]);
}