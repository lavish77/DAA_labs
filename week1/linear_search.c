#include<stdio.h>

int main(){
    int t;
    printf("test case: ");
    scanf("%d",&t);
    while(t!=0){
        int n;
        printf("num of element : ");
        scanf("%d",&n);

        int arr[n];
        int s;
        
        printf("enter element in array : \n");
        for(int i=0;i<n;i++){

            scanf("%d",&arr[i]);
        }
       
        printf("enter value to search: ");
        scanf("%d",&s);
       
        int flag = 0;
        for(int i=0;i<n;i++){
            
            if(arr[i]==s){
                printf("Present %d\n",i+1);
                flag = 1;
                break;
            }
        }
        if (flag ==0)
        {
            printf("Not Present %d\n",n);
        }
        
        t--;
    }
    return 0;
}