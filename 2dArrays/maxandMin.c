#include<stdio.h>
#include<limits.h>
int main(){
    int arr[3][3]={{1,2,3},{6,5,4},{9,8,7}};
    int max =INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }

     int min =INT_MAX;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(min>arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    printf("MAX: %d\n",max);
    printf("MIN: %d",min);
    return 0;
}