#include<stdio.h>
int main(){
    int num[7]= {9,8,3 ,6,11,67,1};
    int n=7;
    for(int i=0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(num[j]>num[j+1]){
                int temp = num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }

    for(int  i =0;i<n;i++){
        printf("%d ",num[i]);
    }
    return 0;
}