#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int count=0;
    int x= 15;
    for(int i=0;i<=9;i++){
        for(int j=i+1;j<=9;j++){
            for(int k=j+1;j<=9;j++){
                if(arr[i]+arr[j]+arr[k]==x){
                    count++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",count);

    return 0;
}