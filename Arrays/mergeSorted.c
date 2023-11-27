#include<stdio.h>

#define max 100

void main() {
    int p[max],q[max],r[max];
    int m,n,i,j,k;
    printf("Enter number of elements of the first array: ");
    scanf("%d",&m);
    printf("Enter %d elements of the firt array sorted in order\n",m);
    for(int i=0;i<m;i++){
        scanf("%d",&p[i]);

    }
    printf("Enter the number of elements of the second array: ");
    scanf("%d",&n);
    printf("Enter %d elements of the second array sorted in order\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&q[i]);

    }
    i=j=k=0;
    while((i<m) && (j<n)){
        if(p[i]<q[j]){
            r[k]=p[i];
            i++;
            k++;
        }
        else{
            if(q[j]<p[i]){
                r[k]=q[j];
                k++;
                j++;
            }
            else{
                r[k]=p[i];
                k++;
                i++;
                r[k]=q[j];
                k++;
                j++;

            }
        }

    }
    while (i<m){
        r[k]=p[i];
        k++;
        i++;
    }
    while(j<n){
        r[k]=q[j];
        k++;
        j++;

    }

    printf("\nThe combined sorted srray is:\n");
    for(i=0;i<k;i++){
        printf("%d\n",r[i]);
    }
  
}


