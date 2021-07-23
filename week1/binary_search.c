#include<stdio.h>

void binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    int c =0;
    // Keep searching until low <= high
    while(low<=high){
        c++;
        mid = (low + high)/2;
        if(arr[mid] == element){
            printf("Present no. of comparision : %d",c);
            return;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    printf("Not Present , no. of comparision : %d ",c); 
    return;
    
}

int main(){
    
    int n;
    printf("num of element : ");
    scanf("%d",&n);
    int arr[n];

    printf("enter element in array : \n");
    for(int i=0;i<n;i++){

            scanf("%d",&arr[i]);
    }

    int s;
    printf("enter value to search: ");
    scanf("%d",&s);

    binarySearch(arr, n, s);

    return 0;
}