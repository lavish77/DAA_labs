#include<stdio.h>

int linear(int arr[],int n,int element,int ind){
    int c =0;
    
        int j=ind-1;
        while(arr[j]==element){
            c++;
            j--;
        }
        j = ind;
        while(j<n && arr[j]==element){

            c++;
            j++;
        }
    
    return c;

}

void search(int arr[],int n,int element){

    int low, mid, high;
    low = 0;
    high = n-1;
    // int c = 0;
    // Keep searching until low <= high
    while(low<=high){
        // c++;
        mid = (low + high)/2;

        if(arr[mid] == element){
            int ct = linear(arr,n,element,mid);
            printf("%d - %d ",element,ct);
            return;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    printf("Not Present \n"); 
    return;
    
}


int main(){
    
    int t;
    scanf("%d",&t);
    while(t!=0){
        int n;
        // printf("n: \n");
        scanf("%d",&n);
        
        int arr[n];
        // printf("element: ");

    int i = 0;
    do{
      scanf ("%d", &arr[i++]);

    }while (getchar () != '\n' && i < n);
      
        
        int k;
        // printf("k:\n");
        scanf("%d",&k);
        search(arr,n,k);
        t--;
    }
    return 0;
}