#include<stdio.h>
#include<limits.h>
int main(){   //0,1,2,3,4,5,6,7
    int arr[8]={1,2,2,4,3,4,3,0};
    int max=INT_MIN;
    int smax=INT_MIN;

    for(int i=0;i<=7;i++){   //i=3 max=4,smax=2
       if(max<arr[i]){
         smax=max;
         max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
   printf("%d is second largest element",smax);
    return 0;
}
