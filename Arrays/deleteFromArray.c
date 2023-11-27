#include<stdio.h>
void main(){
    int p[100],i,n,a;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements of the elements of the array \n",n);
    for( i=0;i<=n-1;i++)
        scanf("%d",&p[i]);
    printf("\nThe array is:\n");
    for(i=0;i<=n-1;i++)
        printf("%d\n",p[i]);
    printf("Enter the position to delete: ");
    scanf("%d",&a);
    a--;
    for(i=a;i<=n-2;i++)
        p[i]=p[i+1];
    p[n-1]=0;
    printf("array after deleting the elements is\n");
    for(i=0;i<=n-2;i++)
        printf("%d\n",p[i]);
}