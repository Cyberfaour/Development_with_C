
/*
This code is a C program that compares two arrays and prints out the common elements between them. It begins 
by including the stdio.h header file, defining the max value as 100, and declaring a function ifexists(). The main() 
function then prompts the user to enter the length of two arrays, followed by the elements of each array. 
The program then uses nested for loops to compare each element of one array to each element of the other array, 
and if a match is found it checks if that element already exists in a third array using the ifexists() function. If it does not exist, 
it adds it to this third array. Finally, it prints out all elements in this third array or prints "There are no common elements in the two arrays" if no matches were found.

*/
#include<stdio.h>

#define max 100

int ifexists(int z[],int u,int v){
    int i;
    if(u==0) return 0;
    for(i=0;i<u;i++)
        if(z[i]==v) return (1);
    return (0);
}
void main(){
    int p[max],q[max],r[max];
    int m,n;
    int i,j,k;
    printf("Enter the length of the first array:");
    scanf("%d",&m);
    printf("Enter %d elements of the first array\n",m);
    for(i=0;i<m;i++)
        scanf("%d",&p[i]);
    printf("\nEnter the length of the second array\n:",n);
    scanf("%d",&n);
    printf("Enter %d elements of the second array\n",n);
    for ( i = 0; i <n; i++)
        scanf("%d",&q[i]);
    k=0;
    for ( i = 0; i <m; i++){
        for (j=0;j<n;j++)
            {
                if (p[i]==q[j])
                {
                if(!ifexists(r,k,p[i]))
                {
                r[k]=p[i];
                k++;
                }
            }
        }   
        
    }
    if(k>0){
        printf("\nThe common eleemnts in the two arrays are:\n");
        for (i = 0; i <k; i++){
            printf("%d\n",r[i]);
        }
        
    }
    else 
        printf("There are no common elemnts in the two arrays\n");
    

    
}