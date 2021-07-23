#include<stdio.h>
#include<math.h>


int jump_s(int arr[],int n,int k){

    if(arr[0]<k && k<arr[2]){
        return 0;
    }
    
    int i;
    for(i =1;(int)pow(2,i)<n;i++){

        // if(arr[2^i] == k){
        //     printf("Present %d",i);
        // }
        // printf("%d ",i);
        if(k<=arr[(int)pow(2,i)]){
            // printf("%d \n",i);
            return i-1;
        }
            
    }
    if(k<=arr[n-1]){
        printf("%d \n",i);
        return i-1;
    }
    
}

void linear(int arr[],int v,int n,int k){

    int c=0;
    for(int i=(int)pow(2,v);i<n;i++){
        c++;
        if(arr[i]==k){
            printf("Present %d\n",c);
            return;
        }
    }
    printf("Not present %d\n",c);
}

int main(){
    
    int t;
    scanf("%d",&t);
    while(t!=0){
        int n;
        scanf("%d",&n);
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&arr[i]);
        }
        int k ;
        scanf("%d",&k);
        
        int ind = jump_s(arr,n,k);
        linear(arr,ind,n,k);

        t--;
    }

    return 0;
}
