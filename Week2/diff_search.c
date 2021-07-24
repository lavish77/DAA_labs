#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int t;
    scanf("%d",&t);

    while(t!=0){

        int n;
        scanf("%d",&n);

        int arr[n];

        int i=0;
        do{
            scanf("%d",&arr[i++]);
        }while(getchar() != '\n' && i<n);

        int k;
        scanf("%d",&k);

        int diff,ct=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){

                diff = abs(arr[i]-arr[j]);
                if(diff == k)
                    ct++;
            }
        }
        printf("%d\n",ct);
        t--;
    }
    return 0;
}