// recursive binary search
#include <stdio.h>
#include<stdlib.h>

#define COMPARE(x,y) ((x==y)? 0:(x>y)? 1:-1)

int binarySearch(int* list,int elements,int first,int last){
    int mid;
    if(first<=last){
        mid = (first+last)/2;
        switch(COMPARE (list[mid],elements)){
            case -1: return binarySearch(list,elements,mid+1,last);
            case 0: return mid;
            case 1: return binarySearch(list,elements,first,mid+1);
            
        }
    }else
        return -1;
        
}

int main(){
    int n,*arr,key;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    arr = (int *)malloc(n*sizeof(int));
    printf("enter the elements in the sorted list:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the key element to be searched:\n");
    scanf("%d",&key);
    
    int index = binarySearch(arr,key,0,n);
    
    if(index == -1)
        printf("The key element was not found:\n");
    else{
        printf("the key element was found in %d position\n",index+1);
        printf("the element is %d",arr[index]);
    }
    free (arr);
    return 0;
    }
