//Selection Sort
#include <stdio.h>
#include <stdlib.h>

#define SWAP(x,y) (x=x+y , y = x-y , x = x-y)

int main() {
    int n,*arr , i , j ;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    arr = (int *)malloc(n*sizeof(int));
    printf(" Enter %d elements :\n",n);
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for (i=0;i<n;i++){
        int index =i;
        for (int j=i;j<n;j++)
            if (arr[index]>arr[j])
                index = j;
                if (index != i)
                    SWAP (arr[i],arr[index]);
    }
    printf("Sorted array:\n");
    for (i=0;i<n;i++)
        printf("%d\t",arr[i]);
    free(arr);
    return 0 ;
}
