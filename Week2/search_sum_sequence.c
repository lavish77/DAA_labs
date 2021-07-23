#include<stdio.h>

int binarySearch(int arr[], int n,int low, int element){
    int mid, high;
    high = n-1;

    // Keep searching until low <= high
    while(low<=high){
        // c++;
        mid = (low + high)/2;
        if(arr[mid] == element){
 
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;  
}



int main(){
    
    int t;
    scanf("%d",&t);
    int ind,flag;

    while(t!=0){
        
        int n;
        scanf("%d",&n);
        
        int arr[n];

        int c=0;
        do{
            scanf ("%d", &arr[c++]);

        }while (getchar () != '\n' && c < n);

        flag =0;
        ind = -1;
        int k;
        for (int i = 0; i < n; i++){
            for(int j =i+1;j<n;j++){

                k = arr[i]+arr[j];
                ind = binarySearch(arr,n,j,k);
                
                if(ind!=-1){
                    
                    printf("i:%d, j:%d, k:%d\n",i,j,ind);
                    flag = 1;
                    break;
                    
                }
            }
            if(flag==1)
                break;
        }

        if(flag==0){
            printf("Sequence not found\n");
        }
        t--;
        
    }
    return 0;
}